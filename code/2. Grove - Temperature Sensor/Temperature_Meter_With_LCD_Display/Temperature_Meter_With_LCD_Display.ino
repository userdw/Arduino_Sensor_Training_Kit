/*===============TEMPERATURE METER WITH LCD DISPLAY==============
  Dibuat Oleh Tim Digiware
  ===============================================================
  Konfigurasi Pin:
  |-----------------------------------------|
  |                     | Arduino Base HAT  |
  |-----------------------------------------|
  |Grove - Temp Sensor  |         A0        |
  |Grove - LCD 16x2     |         I2C       |
  |-----------------------------------------|
*/
#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;

const int B = 4275;               
const int R0 = 100000;            
const int T = A0;     

void setup()
{
    lcd.begin(16,2);
}

void loop()
{
    int a = analogRead(T);

    float R = 1023.0/a-1.0;
    R = R0*R;

    float suhu = 1.0/(log(R/R0)/B+1/298.15)-273.15; 
    lcd.setCursor(2, 1);
    lcd.print("Suhu: ");
    lcd.print(suhu);
    lcd.print(" C");
    text();
    delay(100);
}

void text()
{
  lcd.setCursor(2, 0);
  lcd.print("TEMP MONITOR");
  delay(100);
}

