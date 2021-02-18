
byte val;
void setup(){
  Serial.begin (9600);
  pinMode(2, OUTPUT);
  
}

void loop(){
 int  a=0;
  if(Serial.available())
  {
  val=Serial.read();
  if (int(val)==49)
   digitalWrite(2, HIGH);
   else if(int(val)==50)
   digitalWrite(2, LOW);
   
  }

}
