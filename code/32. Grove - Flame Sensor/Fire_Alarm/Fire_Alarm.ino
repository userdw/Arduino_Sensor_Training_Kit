/*===============FIRE ALARM==============
  Dibuat Oleh Tim Digiware
  =======================================
  Konfigurasi Pin:
  |-----------------------------------------|
  |                     | Arduino Base HAT  |
  |-----------------------------------------|
  |Grove - Buzzer       |         D3        |
  |Grove - Flame Sensor |         D2        |
  |-----------------------------------------|
*/

int flameSensor = 2;   
int buzzer = 3;  

void setup() {
 pinMode(flameSensor,INPUT_PULLUP);
 pinMode(buzzer,OUTPUT);
}

void loop() {
  if(digitalRead(flameSensor) == HIGH)
  {
    digitalWrite(buzzer, HIGH);
  }

  else
  {
    digitalWrite(buzzer, LOW);
    
  }

}
