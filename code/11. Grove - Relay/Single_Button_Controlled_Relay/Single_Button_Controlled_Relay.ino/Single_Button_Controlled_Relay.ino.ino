/*===============SINGLE BUTTON CONTROLLED RELAY==================
  Dibuat Oleh Tim Digiware
  ===============================================================
  Konfigurasi Pin:
  |------------------------------------------------|
  |                            | Arduino Base HAT  |
  |------------------------------------------------|
  |Grove - Relay               |         D3        |
  |Grove - Button              |         D2        |
  |------------------------------------------------|
*/

#define button 2
#define relay 3
int count;

void setup() {
  
  pinMode(button, INPUT);
  pinMode(relay, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  int val = digitalRead(button);

  if(val == 1)
  {
    count++;
    delay(300);
    
    if(count == 1)
    {
      digitalWrite(relay, 1);
    }
  
    if(count == 2)
    {
      digitalWrite(relay, 0);
      count = 0;
    }
  }


}
