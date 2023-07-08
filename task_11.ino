void setup(){
 Serial.begin(9600); 
  pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
  
  digitalWrite(8,HIGH);
  delay(400);
  
  
  for(int x=3;x>0;x--){
    digitalWrite(9,HIGH);
delay(500);
      digitalWrite(9,LOW);
    delay(500);}
       
  
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);

  
  
  
  digitalWrite(10,HIGH);
delay(500);
  
      digitalWrite(10,LOW);
    delay(500);
  
}
      
  void loop(){}
