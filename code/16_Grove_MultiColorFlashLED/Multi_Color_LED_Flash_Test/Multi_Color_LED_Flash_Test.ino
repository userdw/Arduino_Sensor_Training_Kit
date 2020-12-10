/*===============MULTI COLOR LED FLASH TEST==================
  Dibuat Oleh Tim Digiware
  ===========================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - Multi Color LED     |         D2        |
  |------------------------------------------------|
*/
void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);   
}
