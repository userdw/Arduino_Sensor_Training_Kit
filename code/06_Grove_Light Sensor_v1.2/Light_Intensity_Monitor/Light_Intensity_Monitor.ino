/*===============LIGHT INTENSITY MONITORING==================
  Dibuat Oleh Tim Digiware
  ===========================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - Light Sensor        |         A0        |
  |Grove - LCD 16x2            |         I2C       |
  |------------------------------------------------|
*/
#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;

#define lightSensor A0

void setup() {
  Serial.begin(9600);
  pinMode(lightSensor, INPUT);
  lcd.begin(16,2);
}

void loop() {
  
  int delta = analogRead(lightSensor);
  Serial.println(delta);
  delay(500);
  //int intensity = map(delta, 0, 1023, 0, 10000);
  lcd.setCursor(0, 0);
  lcd.print("Nilai ADC: ");
  lcd.print(delta);
  lcd.setCursor(0, 1);
  lcd.print("Light Monitoring");
  //lcd.clear();
  delay(400);

}
