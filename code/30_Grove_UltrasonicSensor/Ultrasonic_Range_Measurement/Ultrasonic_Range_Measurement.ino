/*===============ULTRASONIC RANGE MEASUREMENT================
  Dibuat Oleh Tim Digiware
  ===========================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - Ultrasonic Ranger   |         D7        |
  |Grove - LCD 16x2            |         I2C       |
  |------------------------------------------------|
*/
#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;

#include "Ultrasonic.h"
Ultrasonic ultrasonic(7);

void setup() {
  Wire.begin();
  lcd.begin(16,2);
 
}

void loop() {
  
    long RangeInCentimeters;

    lcd.setCursor(0,1);
    lcd.print("Jarak: ");

    int jarak = ultrasonic.MeasureInCentimeters(); 
    lcd.print(jarak);
    lcd.print(" cm ");
    delay(250);
    scroll();
}

void scroll()
{
  
  lcd.setCursor(0,0);
  lcd.print("ULTRASONIC TEST");
  delay(250);
  
}

