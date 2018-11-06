//#define MQTT_MAX_PACKET_SIZE 512
#define MQTT_PORT 8883

#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <EEPROM.h>
#include <PubSubClient.h>

#define FINGERPRINT "10:B3:81:C7:8A:21:81:66:EC:1C:8A:2C:D4:34:14:93:36:CE:39:19"

#define AMP_PIN D2

unsigned int calibration[11] = {0, 83, 166, 250, 330, 410, 490, 570, 645, 722, 797};

/*
  Sur Pi :
  mosquitto_sub -v -h localhost -t outTopic
  mosquitto_pub -h localhost -t inTopic -m 1

  Avec auth
  mosquitto_sub -u "toto" -P "coucou" -h raspibase.local -t outTopic
  mosquitto_pub -u "toto" -P "coucou" -h raspibase.local -t inTopic -m 0

  Avec auth et TLS :
  mosquitto_sub -p 8883 --tls-version tlsv1 --cafile /etc/mosquitto/ca.crt -u "toto" -P "coucou" -h raspibase.local -t outTopic
  mosquitto_pub -p 8883 --tls-version tlsv1 --cafile /etc/mosquitto/ca.crt -u "toto" -P "coucou" -h raspibase.local -t inTopic -m 0

  Pour ce croquis (analog amp) :
  mosquitto_sub -v -h raspberrypiled.local -p 8883 --tls-version tlsv1 --cafile /etc/mosquitto/ca.crt -u "sondes" -P "mot2passe" -t "#"
  mosquitto_pub -h raspberrypiled.local -p 8883 --tls-version tlsv1 --cafile /etc/mosquitto/ca.crt -u "sondes" -P "mot2passe" -t analog -m 20
*/

// nom de la machine ayant le broker (mDNS)
const char* mqtt_server = "raspberrypiled.local";

// structure pour la configuration
struct EEconf {
  char ssid[32];
  char password[64];
  char myhostname[32];
} readconf;

// objet pour la connexion
WiFiClientSecure espClient;
// connexion MQTT
PubSubClient client(espClient);
// pour l'intervalle
long lastMsg = 0;
// valeur à envoyer
byte val = 0;

void setup_wifi() {
  // mode station
  WiFi.mode(WIFI_STA);
  Serial.println();
  Serial.print("Connexion ");
  Serial.println(readconf.ssid);
  // connexion wifi
  WiFi.begin(readconf.ssid, readconf.password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  // affichage
  Serial.println("");
  Serial.println("Connexion wifi ok");
  Serial.println("Adresse IP: ");
  Serial.println(WiFi.localIP());

  // configuration mDNS
  WiFi.hostname(readconf.myhostname);
  if (!MDNS.begin(readconf.myhostname)) {
    Serial.println("Erreur configuration mDNS!");
  } else {
    Serial.println("répondeur mDNS démarré");
    Serial.println(readconf.myhostname);
  }
}

void setanalog(short val) {
  if (val >= 100) {
    analogWrite(AMP_PIN, calibration[10]);
    return;
  }
  if (val < 0) {
    analogWrite(AMP_PIN, calibration[0]);
    return;
  }
  analogWrite(AMP_PIN, val * calibration[val / 10 + 1] / ((val / 10 + 1) * 10));
  return;
}

void setanalogf(float val, float minval, float maxval) {
  if(val<minval) val = minval;
  if(val>maxval) val = maxval;
  if(maxval-minval<=0) return;
  setanalog((val-minval)*100/(maxval-minval));
  return;
}

void callback(char* topic, byte* payload, unsigned int length) {
  String strPayload = "";
  Serial.print("Message [");
  Serial.print(topic);
  Serial.print("] ");
  // construction de la chaîne
  for (int i = 0; i < length; i++) {
    strPayload += (char)payload[i];
  }
  Serial.print("payload: ");
  Serial.print(strPayload);
  // conversion en int et "affichage" analogique
  //setanalog(strPayload.toInt());
  setanalogf(strPayload.toFloat(),10.0,30.0);
  Serial.println();
}

void reconnect() {
  // Connecté au broker ?
  while (!client.connected()) {
    // non. On se connecte.

    // connexion via "espClient" et non "client"
    if (!espClient.connect(mqtt_server, MQTT_PORT)) {
      Serial.println("Unable to TLS connect");
      delay(5000);
      continue;
    }

    // verification du fingerprint du broker
    if (!espClient.verify(FINGERPRINT, mqtt_server)) {
      Serial.println("Fingerprint check failed");
      espClient.stop();
      delay(5000);
      continue;
    }
    // déconnexion
    espClient.stop();

    // connexion MQTT via PubSubClient
    if (!client.connect(readconf.myhostname, "sondes", "mot2passe")) {
      Serial.print("Erreur connexion MQTT, rc=");
      Serial.println(client.state());
      delay(5000);
      continue;
    }
    Serial.println("Connexion serveur MQTT ok");
    // connecté.
    // on s'abonne au topic "analog"
    client.subscribe("analog");
  }
}

void setup() {
  // configuration led
  pinMode(BUILTIN_LED, OUTPUT);
  pinMode(AMP_PIN, OUTPUT);
  // configuration moniteur série
  Serial.begin(115200);
  // configuration EEPROM
  EEPROM.begin(sizeof(readconf));
  // lecture configuration
  EEPROM.get(0, readconf);
  // configuration wifi
  setup_wifi();
  // configuration broker
  client.setServer(mqtt_server, MQTT_PORT);
  // configuration callback
  client.setCallback(callback);
}

void loop() {
  // array pour conversion val
  char msg[16];
  // array pour topic
  char topic[64];

  // Sommes-nous connecté ?
  if (!client.connected()) {
    // non. Connexion
    reconnect();
  }
  // gestion MQTT
  client.loop();

  // temporisation
  long now = millis();
  if (now - lastMsg > 5000) {
    // 5s de passé
    lastMsg = now;
    val++;
    // construction message
    sprintf(msg, "hello world #%hu", val);
    // construction topic
    sprintf(topic, "maison/%s/valeur", readconf.myhostname);
    // publication message sur topic
    client.publish(topic, msg);
  }
}
