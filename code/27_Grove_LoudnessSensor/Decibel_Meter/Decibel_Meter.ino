/*================DECIBEL METER====================
  Dibuat Oleh Tim Digiware
  =================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - Loudness Sensor     |         A0        |
  |Grove - LCD 16x2            |         I2C       |
  |------------------------------------------------|
*/

#define sound A0

#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

void setup() {
  
  lcd.begin(16,2);
  Serial.begin(9600);
  lcd.setCursor(5,1);

}

void loop() {
  
  int analogVal = analogRead(sound);

  int dB = map(analogVal, 0, 410, 0, 88);
  
  lcd.setCursor(5,1);
  lcd.print(dB + 14);
  lcd.print(" dB ");
  delay(500);


  lcd.setCursor(1,0);
  lcd.print("DECIBEL METER");
  
}
