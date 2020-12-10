/*============MAGNET DETECTION COUNTER=============
  Dibuat Oleh Tim Digiware
  =================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - Hall Sensor         |         D3        |
  |Grove - LCD 16x2            |         I2C       |
  |------------------------------------------------|
*/

#define hall 3

#include <Wire.h>
#include "rgb_lcd.h"

int count;

rgb_lcd lcd;

void setup() {
  
  lcd.begin(16,2);
  pinMode(hall, INPUT_PULLUP);
  count = 0;


}

void loop() {
  
  int detect = digitalRead(hall);
  
  lcd.setCursor(3,1);
  lcd.print("Count: ");

  lcd.setCursor(1,0);
  lcd.print("MAGNET COUNTER");
  
  if(detect == LOW)
  {
    
    count++;
    lcd.setCursor(10,1);
    lcd.print(count);
    delay(250);
      
  }
}
