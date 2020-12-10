/*===============VIBRATION MOTOR SPEED CONTROLLER==================
  Dibuat Oleh Tim Digiware
  =================================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - Vibration Motor     |         D3        |
  |Grove - Rotary Angle Sensor |         A0        |
  |------------------------------------------------|
*/
#define rotary A0
#define vibMotor 3

void setup() {
  pinMode(rotary, INPUT);
  pinMode(vibMotor, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  int sudut = analogRead(rotary);
  int kontrol = map(sudut, 0, 1023, 0, 255);
  Serial.println(kontrol);
  delay(500);
  analogWrite(vibMotor, kontrol);

}
