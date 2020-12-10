/*===============WATER DETECTOR WITH LED NOTIFICATION==============
  Dibuat Oleh Tim Digiware
  =================================================================
  Konfigurasi Pin:
  |-----------------------------------------|
  |                     | Arduino Base HAT  |
  |-----------------------------------------|
  |Grove - Water Sensor |         D2        |
  |Grove - LCD 16x2     |         I2C       |
  |-----------------------------------------|
*/
#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;

#define sensor 2

void setup()
{
    lcd.begin(16,2);
}

void loop()
{
    int data = digitalRead(sensor);
    if(data == 0)
    {
      lcd.setCursor(1, 1);
      lcd.print("AIR TERDETEKSI");
      
      
    }
    else
    if(data == 1)
    {
      lcd.setCursor(1, 1);
      lcd.print("TIDAK ADA AIR ");
      
      
    
}
text();
}

void text()
{
  lcd.setCursor(1, 0);
  lcd.print("WATER DETECTOR");
  delay(100);
}

