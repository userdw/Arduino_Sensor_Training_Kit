/*===============SWITCH STATE READ==============
  Dibuat Oleh Tim Digiware
  ==============================================
  Konfigurasi Pin:
  |-----------------------------------------|
  |                     | Arduino Base HAT  |
  |-----------------------------------------|
  |Grove - Switch (P)   |         D2        |
  |Grove - LCD 16x2     |         I2C       |
  |-----------------------------------------|
*/
#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;

#define mySwitch 2

void setup()
{
    lcd.begin(16,2);
}

void loop()
{
    int data = digitalRead(mySwitch);
    if(data == 1)
    {
      lcd.setCursor(6, 1);
      lcd.print("ON ");
      
      
    }
    else
    if(data == 0)
    {
      lcd.setCursor(6, 1);
      lcd.print("OFF ");
      
      
    
}
text();
}

void text()
{
  lcd.setCursor(1, 0);
  lcd.print("POSISI SAKLAR");
  delay(100);
}

