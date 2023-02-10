#ifndef ENABLE_MQTT_TLS
    #include <sys/types.h>
    #include <sys/socket.h>
    #include <netinet/in.h>
    #include <netdb.h>
    #include <unistd.h>
#endif

#include <string.h>

#include "wolfmqtt/mqtt_client.h"
#include "config.h"
#include "onem2m.h"
#include "cJSON.h"
#include "config.h"

int mqtt_respond_to_client(oneM2MPrimitive *o2pt);
void idToMqttClientId(char *id);
void MqttClientIdToId(char *id);
int mqtt_ser(void);

void route();