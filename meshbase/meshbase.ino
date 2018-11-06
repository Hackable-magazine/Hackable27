#include <painlessMesh.h>

#define MESH_PREFIX     "CeQuiVousPlait"
#define MESH_PASSWORD   "QuelqueChoseDeSecret"
#define MESH_PORT       5555

Scheduler userScheduler;
painlessMesh  mesh;

// Prototype de fonction associée à la tâche
void sendMessage();

// Tâche
Task taskSendMessage(TASK_SECOND*1, TASK_FOREVER, &sendMessage);

// fonction associée à la tâche
void sendMessage() {
  String msg = "Coucou du node ";
  // ajout du numéro de node
  msg += mesh.getNodeId();
  // envoi à tous
  mesh.sendBroadcast(msg);
  // changement de l'intervale de temps
  taskSendMessage.setInterval(random(TASK_SECOND*1, TASK_SECOND*5));
}

// Callbacks
void receivedCallback( uint32_t from, String &msg ) {
  Serial.printf("Message de %u = %s\n", from, msg.c_str());
}

void newConnectionCallback(uint32_t nodeId) {
  Serial.printf("Nouvelle connexion, node = %u\n", nodeId);
}

void changedConnectionCallback() {
  Serial.printf("Changement de connections %s\n",
    mesh.subConnectionJson().c_str());
}

void nodeTimeAdjustedCallback(int32_t offset) {
  Serial.printf("Adjustement du temps %u. Offset = %d\n",
    mesh.getNodeTime(),offset);
}

void setup() {
  Serial.begin(115200);

//mesh.setDebugMsgTypes( ERROR | MESH_STATUS | CONNECTION | SYNC | COMMUNICATION | GENERAL | MSG_TYPES | REMOTE ); // all types on
  mesh.setDebugMsgTypes( ERROR | STARTUP );  // set before init() so that you can see startup messages

  // Initialisation
  mesh.init(MESH_PREFIX, MESH_PASSWORD, &userScheduler, MESH_PORT);
  // en cas de réception
  mesh.onReceive(&receivedCallback);
  // en cas de nouvelle connexion
  //mesh.onNewConnection(&newConnectionCallback);
  // en cas de changement de connexion
  //mesh.onChangedConnections(&changedConnectionCallback);
  // en cas d'ajustement de la synchronisation du temps
  //mesh.onNodeTimeAdjusted(&nodeTimeAdjustedCallback);

  // On ajoute la tâche à l'ordonnanceur
  userScheduler.addTask(taskSendMessage);
  // Activation de la tâche
  taskSendMessage.enable();
}

void loop() {
  // tâche utilisateur et tâche mesh
  userScheduler.execute();
  mesh.update();
}
