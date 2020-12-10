/*=================MAGNET Detection ALARM WITH BUZZER==================
  Dibuat Oleh Tim Digiware
  =====================================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - Magnetic Switch     |         D2        |
  |Grove - Buzzer              |         D3        |
  |------------------------------------------------|
*/

#define magnet 2
#define buzzer 3

void setup() {
  pinMode(magnet, INPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  byte state = digitalRead(magnet);
  if(state == 1)
  {
    digitalWrite(buzzer, HIGH);
  }
  else
  {
    digitalWrite(buzzer, LOW);
  }

}
