/*===============PIR HUMAN DETECTION=================
  Dibuat Oleh Tim Digiware
  ===================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - Mini PIR Sensor     |         D2        |
  |Grove - LCD 16x2            |         I2C       |
  |Grove - Buzzer              |         D4        |
  |------------------------------------------------|
*/

#define pir 2
int buzzer = 4;
#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;

void setup() {
  
  lcd.begin(16,2);
  pinMode(pir, INPUT);
  Serial.begin(9600);

}

void loop() {
  
  int scan = digitalRead(pir);
  Serial.println(scan);
  delay(1000);
  
  if(scan == 1)
  {
    
    lcd.setCursor(2, 1);
    lcd.print("ADA MANUSIA! ");
    delay(500);
    
    analogWrite(buzzer, 150);
    delay(1000);
    analogWrite(buzzer, 0);
    delay(2000);

    lcd.clear();
    
  }
  
  else
  {
    lcd.setCursor(4, 1);
    lcd.print("STANDBY ");
    delay(500);
    lcd.clear();
  }
lcd.setCursor(3, 0);
lcd.print("PIR ALARM");
}
