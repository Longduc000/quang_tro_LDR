#include <Arduino.h>

const int analogPin = 39; // Chân ADC kết nối với LDR

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(analogPin); // Đọc giá trị analog từ chân ADC
  Serial.print(">sensorValue:");
  Serial.println(sensorValue); // In giá trị ra cổng serial
  delay(100); // Delay 100ms trước khi đọc lại)
}