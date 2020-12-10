/*===============TILT DETECTOR ALARM==============
  Dibuat Oleh Tim Digiware
  ==========================================
  Konfigurasi Pin:
  |-----------------------------------------|
  |                     | Arduino Base HAT  |
  |-----------------------------------------|
  |Grove - Buzzer       |         D3        |
  |Grove - Tilt Switch  |         D2        |
  |-----------------------------------------|
*/

int tilt = 2;   
int buzzer = 3;  

void setup() {
 pinMode(tilt,INPUT_PULLUP);
 pinMode(buzzer,OUTPUT);
}

void loop() {
  if(digitalRead(tilt) == HIGH)
  {
    digitalWrite(buzzer, HIGH);
  }

  else
  {
    digitalWrite(buzzer, LOW);
    
  }

}
