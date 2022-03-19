// Librery
#include <WiFi.h>
#include <WiFiMulti.h>
#include <HTTPClient.h>

WiFiMulti wifiMulti;

void setup() {
  Serial.begin(115200);
  delay(100);
  wifiMulti.addAP(
    "Nexxt_96A904",
    "12345678");//Agregar un access point
  Serial.println("Conectando a WiFi");
  while(wifiMulti.run() != WL_CONNECTED){
    Serial.print(".");
  }
  Serial.println();
  Serial.println("WiFi conectado");
  Serial.println("Direccion IP :");
  Serial.println(WiFi.localIP());
}

void loop() {
  HTTPClient http;
  Serial.println("[HTTP] INICIANDO...");
  http.begin("http://arduino.tips/asciilogo.txt");
  Serial.println("[HTTP] GET...");
  http.GET();
  String respuesta = http.getString();
  Serial.print(respuesta);
  http.end();
  delay(10000);
}