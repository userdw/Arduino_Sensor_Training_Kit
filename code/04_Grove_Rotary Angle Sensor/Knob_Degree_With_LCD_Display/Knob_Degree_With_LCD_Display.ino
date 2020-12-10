/*===============KNOB DEGREE WITH LCD DISPLAY==================
  Dibuat Oleh Tim Digiware
  =============================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - LCD 16x2            |         I2C       |
  |Grove - Rotary Angle Sensor |         A0        |
  |------------------------------------------------|
*/
#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;

#define rotary A0

void setup() {
  pinMode(rotary, INPUT);
  lcd.begin(16,2);
}

void loop() {
  
  int bacaSudut = analogRead(rotary);
  int sudut = map(bacaSudut, 0, 1023, 0, 300);
  lcd.setCursor(6, 1);
  lcd.print(sudut);
  lcd.write(B11011111);
  lcd.print(" ");
  //lcd.print(" derajat ");
  //lcd.clear();
  delay(100);

  lcd.setCursor(3, 0);
  lcd.print("SUDUT KNOB");
  delay(100);

}
