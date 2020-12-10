/*===============SOUND METER WITH BARGRAPH==================
  Dibuat Oleh Tim Digiware
  =================================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - Sound Sensor        |         D3        |
  |Grove - LED Bar v2.0        |         A0        |
  |------------------------------------------------|
*/

const int mic = A0;
#include <Grove_LED_Bar.h>
Grove_LED_Bar bar(7, 6, 0, LED_BAR_10);

void setup()
{
    Serial.begin(115200);
    bar.begin();
    
}

void loop()
{
    long sum = 0;
    for(int i=0; i<32; i++)
    {
        sum += analogRead(mic);
    }

    sum >>= 5;

    Serial.println(sum);
    delay(10);
    
    if(sum <= 80)
    {
      bar.setLevel(1);
      delay(100);
    }

    else if(sum <= 160)
    {
      bar.setLevel(2);
      delay(100);
    }

    else if(sum <= 240)
    {
      bar.setLevel(3);
      delay(100);
    }

    else if(sum <= 320)
    {
      bar.setLevel(4);
      delay(100);
    }

    else if(sum <= 400)
    {
      bar.setLevel(5);
      delay(100);
    }

    else if(sum <= 480)
    {
      bar.setLevel(6);
      delay(100);
    }

    else if(sum <= 560)
    {
      bar.setLevel(7);
      delay(100);
    }

    else if(sum <= 740)
    {
      bar.setLevel(8);
      delay(100);
    }

    else if(sum >= 741)
    {
      bar.setLevel(10);
      delay(100);
    }
}
