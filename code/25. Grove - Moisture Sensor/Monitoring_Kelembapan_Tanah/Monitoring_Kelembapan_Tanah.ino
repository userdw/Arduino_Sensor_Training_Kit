/*===============MONITORING KELEMBAPAN TANAH=================
  Dibuat Oleh Tim Digiware
  ===========================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - Moisture Sensor     |         A0        |
  |Grove - LCD 16x2            |         I2C       |
  |------------------------------------------------|
*/

#define sensor A0

#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;

void setup() {
  
  lcd.begin(16,2);
  pinMode(sensor, INPUT);
  Serial.begin(9600);

}

void loop() {
  
  int moist = analogRead(sensor);

  if(moist <= 300)
  {
    lcd.setCursor(2,1);
    lcd.print("TANAH KERING");
  }

  if(moist >= 300 && moist <= 700)
  {
    lcd.setCursor(2,1);
    lcd.print("TANAH LEMBAB");
  }

  if(moist > 700)
  {
    lcd.setCursor(2,1);
    lcd.print("TANAH BASAH");
  }

   lcd.setCursor(1,0);
   lcd.print("NILAI ADC: ");
   lcd.print(moist);
   delay(500);
   
}
