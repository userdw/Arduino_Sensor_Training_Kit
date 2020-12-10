/*============ACCELEROMETER TEST===================
  Dibuat Oleh Tim Digiware
  =================================================
  Konfigurasi Pin:
  |-------------------------------------------------|
  |                             | Arduino Base HAT  |
  |-------------------------------------------------|
  |Grove - 3-axis Accelerometer |         I2C       |
  |Grove - LCD 16x2             |         I2C       |
  |-------------------------------------------------|
*/

#include "MMA7660.h"
MMA7660 acc;

#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;

void setup() {
  
  lcd.begin(16,2);
  acc.init(); 



}

void loop() {
  
 int8_t x;
 int8_t y;
  int8_t z;
  float ax,ay,az;
  
  acc.getXYZ(&x,&y,&z);

  lcd.setCursor(0,0);
  lcd.print("        ");
  lcd.print("x=");
  lcd.print(x);
  lcd.print("          ");
  lcd.print("y=");
  lcd.print(y);
  lcd.print("         ");
  lcd.print("z=");
  lcd.print(z);
  lcd.print("        ");
  delay(100);
  
  acc.getAcceleration(&ax,&ay,&az);
  lcd.setCursor(0,1);
  lcd.print("      ");
  lcd.print("ax=");
  lcd.print(ax);
  lcd.print("      ");
  lcd.print("ay=");
  lcd.print(ay);
  lcd.print("      ");
  lcd.print("az=");
  lcd.print(az);
  lcd.print("      ");
  delay(300);
  lcd.scrollDisplayLeft();
  delay(10);
}
