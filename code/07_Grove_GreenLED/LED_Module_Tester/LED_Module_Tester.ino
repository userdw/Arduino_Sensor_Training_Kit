/*==================LED MODULE TESTER===============
  Dibuat Oleh Tim Digiware
  ==================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - Red/Green/Blue LED  |         D3        |
  |------------------------------------------------|
*/

#define led 3

void setup() {
  pinMode(led, OUTPUT);

}

void loop() {
  lowBlink();
  delay(100);
  lowBlink();
  delay(100);
  lowBlink();
  delay(100);
  medBlink();
  delay(100);
   medBlink();
  delay(100);
   medBlink();
  delay(100);
  hiBlink();
  delay(100);
   hiBlink();
  delay(100);
   hiBlink();
  delay(100);
  stayStill();
  delay(5000);
  fade();

}

void lowBlink()
{
  digitalWrite(led, 1);
  delay(2000);
  digitalWrite(led, 0);
  delay(2000);
}

void medBlink()
{
  digitalWrite(led, 1);
  delay(1000);
  digitalWrite(led, 0);
  delay(1000);
}

void hiBlink()
{
  digitalWrite(led, 1);
  delay(500);
  digitalWrite(led, 0);
  delay(500);
}

void stayStill()
{
  digitalWrite(led, 1);
}

void fade()
{
  
  for( int i=0 ; i <= 255 ; i++)
  {
    analogWrite(led, i);
    delay(10);
  }
}

