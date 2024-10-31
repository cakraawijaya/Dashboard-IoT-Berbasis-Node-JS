#include <WiFi.h>
#include <MQTT.h>

#define ssid "Wokwi-GUEST"
#define pass ""

WiFiClient net;
MQTTClient client;

unsigned long lastMillis = 0;

void connect() {
  Serial.print("Checking wifi...");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(1000);
  }

  Serial.print("\nConnecting...");
  while (!client.connect("mqttx_fcbc96e1")) {
    Serial.print(".");
    delay(1000);
  }

  Serial.println("\nConnected!");
}

void setup() {
  pinMode(33, INPUT);
  Serial.begin(115200);
  WiFi.begin(ssid, pass);

  client.begin("broker.emqx.io", net);

  connect();
}

void loop() {
  client.loop();
  delay(10);

  if (!client.connected()) {
    connect();
  }

  if (millis() - lastMillis > 1000) {
    lastMillis = millis();
    int pot = analogRead(33);
    Serial.println(pot);
    client.publish("kelasiot/pot", String(pot));
  }
}

// Workshop Kelas IoT - Membuat Dashboard IoT dengan Node.js
