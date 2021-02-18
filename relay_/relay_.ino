#define RELAY ?
void setup(){
  Serial.begin (9600);
  pinMode(REALY, OUTPUT);
  
}


void loop(){
  digitalWrite(REKAY, 0);
  Serial.println("LIGHTS ON");
  delay(2000);
  digitalWrite(RELAY, 1);
  Serial.println("LIGHTS OFF");
   delay(2000);
}
