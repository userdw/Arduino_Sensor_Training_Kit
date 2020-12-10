/*===================VIBRATION DETECTION===================
  Dibuat Oleh Tim Digiware
  =========================================================
  Konfigurasi Pin:
  |--------------------------------------------------------|
  |                                    | Arduino Base HAT  |
  |--------------------------------------------------------|                
  |Grove - Red/Green/Blue LED / Buzzer |         D3        |
  |Grove - Vibration Sensor            |         D2        |
  |--------------------------------------------------------|
*/

int vib = 2;   
int out = 3;

void setup() {
 Serial.begin(9600);
 pinMode(vib,INPUT);
 pinMode(out,OUTPUT);
}

void loop() {

  int data = digitalRead(vib);
  
  if(data == HIGH)
  {
    digitalWrite(out, LOW);
  }

  else
  {
    digitalWrite(out, HIGH);
    delay(500);
    
  }

}
