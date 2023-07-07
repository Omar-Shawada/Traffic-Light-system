

void setup(){
  Serial.begin(9600);
 
  pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
      pinMode(11,OUTPUT);
digitalWrite(9,HIGH);
delay(500);
  digitalWrite(9,LOW);
  
  for(int x=3;x>0;x--){
    digitalWrite(10,HIGH);
delay(500);
  digitalWrite(10,LOW);
    delay(500);
   }
  digitalWrite(9,HIGH);
    digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(9,LOW);
    digitalWrite(11,LOW);
  delay(500);

}
void loop(){












}