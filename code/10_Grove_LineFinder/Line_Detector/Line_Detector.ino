/*===============BLACK & WHITE LINE DETECTOR=================
  Dibuat Oleh Tim Digiware
  ===========================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - Line Sensor         |         D2        |
  |Grove - LCD 16x2            |         I2C       |
  |------------------------------------------------|
*/
#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;

#define lineSensor 2

void setup() {
  pinMode(lineSensor, INPUT);
  lcd.begin(16,2);
}

void loop() {
  
  int line = digitalRead(lineSensor);
  
  if(line == HIGH)
  {
    lcd.setCursor(2, 0);
    lcd.print("GARIS HITAM");
  }
  
  else
  {
    lcd.setCursor(2, 0);
    lcd.print("GARIS PUTIH");
  }
  lcd.setCursor(2, 1);
  lcd.print("Line Dection");
  delay(500);

}
