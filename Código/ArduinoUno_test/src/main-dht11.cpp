#include <Arduino.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
 
DHT_Unified dht(13, DHT11);

uint32_t delayMS;

void setup() {
  Serial.begin(9600);

  dht.begin();
  sensor_t sensor;
  dht.temperature().getSensor(&sensor);
  dht.humidity().getSensor(&sensor);
  Serial.print(F("Min delay: "));
  Serial.println(sensor.min_delay);

  delayMS = 2000;
}

void loop() {
  delay(delayMS);

  sensors_event_t event;
  dht.temperature().getEvent(&event);
  Serial.print(F("Temperatura: "));
  Serial.print(event.temperature);
  Serial.print(F("ºC  /   Humidity: "));
  dht.humidity().getEvent(&event);
  Serial.print(event.relative_humidity);
  Serial.println(F("%"));
}