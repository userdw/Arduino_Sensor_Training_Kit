/*===============TEMPERATURE & HUMIDITY MONITOR===============
  Dibuat Oleh Tim Digiware
  ============================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - Temp. & Humid Sensor|         D2        |
  |Grove - LCD 16x2            |         I2C       |
  |------------------------------------------------|
*/
#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;

#include "DHT.h"
#define dhtpin 2
#define dhttype DHT11
DHT dht(dhtpin, dhttype);

void setup() {
  Wire.begin();
  lcd.begin(16,2);
  dht.begin();
}

void loop() {
  
  float temp_hum_val[2] = {0};

  if(!dht.readTempAndHumidity(temp_hum_val)){
        lcd.setCursor(0, 0);
        lcd.print("Humidity: "); 
        lcd.print(temp_hum_val[0]);
        lcd.print(" %\t");
        lcd.setCursor(0, 1);
        lcd.print("Temp: "); 
        lcd.print(temp_hum_val[1]);
        lcd.println(" *C  ");
        }
    else{
       lcd.println("NO DATA!!! ");
    }
   delay(1000);
}

