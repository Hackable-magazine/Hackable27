#include <Arduino.h>
#include <painlessMesh.h>
#include <PubSubClient.h>
#include <WiFiClient.h>
#include <ESP8266mDNS.h>
#include <EEPROM.h>

#define MESH_PREFIX     "CeQuiVousPlait"
#define MESH_PASSWORD   "QuelqueChoseDeSecret"
#define MESH_PORT       5555
#define MQTT_PORT       8883
#define FINGERPRINT "10:B3:81:C7:8A:21:81:66:EC:1C:8A:2C:D4:34:14:93:36:CE:39:19"

// nom de la machine ayant le broker (mDNS)
const char* mqtt_server = "raspberrypiled.local";

// connexion au mesh
painlessMesh  mesh;
// objet pour la connexion
WiFiClientSecure espClient;
// connexion MQTT
PubSubClient client(espClient);

// structure pour la configuration
struct EEconf {
  char ssid[32];
  char password[64];
  char myhostname[32];
} readconf;

// connexion au broker
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
    client.publish("painlessMesh/from/gateway","Ready!");
    client.subscribe("painlessMesh/to/#");
  }
}

// réception MQTT et retransmission mesh
void mqttCallback(char* topic, uint8_t* payload, unsigned int length) {
  String strPayload = "";
  // construction de la chaîne
  for (int i = 0; i < length; i++) {
    strPayload += (char)payload[i];
  }

  /*
  // création array length+1
  char* cleanPayload = (char*)malloc(length+1);
  payload[length] = '\0';
  memcpy(cleanPayload, payload, length+1);
  String msg = String(cleanPayload);
  free(cleanPayload);
  */

  String targetStr = String(topic).substring(16);

  if(targetStr == "gateway") {
    if(strPayload == "getNodes") {
      client.publish("painlessMesh/from/gateway",
        mesh.subConnectionJson().c_str());
    }
  } else if(targetStr == "broadcast") {
    mesh.sendBroadcast(strPayload);
  } else {
    uint32_t target = strtoul(targetStr.c_str(), NULL, 10);
    if(mesh.isConnected(target)) {
      mesh.sendSingle(target, strPayload);
    } else {
      client.publish("painlessMesh/from/gateway", "Client absent!");
    }
  }
}

// Réception mesh et retransmission MQTT
void receivedCallback( const uint32_t &from, const String &msg ) {
  Serial.printf("bridge: Message de %u =%s\n", from, msg.c_str());
  // publication du message en MQTT
  if(client.connected()) {
    String topic = "painlessMesh/from/" + String(from);
    client.publish(topic.c_str(), msg.c_str());
  }
}

void setup() {
  Serial.begin(115200);

  EEPROM.begin(sizeof(readconf));
  EEPROM.get(0, readconf);

  mesh.setDebugMsgTypes(ERROR | STARTUP | CONNECTION);

  // Initialisation du mesh en utilisant le canal wifi 3
  // Ce canal doit être identique à celui utilisé par le point d'accès
  mesh.init(MESH_PREFIX, MESH_PASSWORD, MESH_PORT, WIFI_AP_STA, 3);
  mesh.onReceive(&receivedCallback);

  // Connexion wifi en mode client (station) manuelle
  mesh.stationManual(readconf.ssid, readconf.password);
  // Configuration du nom d'hôte
  mesh.setHostname(readconf.myhostname);

  // configuration broker
  client.setServer(mqtt_server, MQTT_PORT);
  // configuration callback
  client.setCallback(mqttCallback);
}

void loop() {
  mesh.update();

  // Sommes-nous connecté ?
  // wifi
  if (WiFi.status() == WL_CONNECTED) {
    // broker MQTT
    if (!client.connected()) {
      reconnect();
    }
  }

  client.loop();
}
