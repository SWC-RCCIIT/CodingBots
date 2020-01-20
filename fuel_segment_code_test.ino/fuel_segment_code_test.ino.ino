const int l1=3;


void setup(){
  pinMode(l1,OUTPUT);
  
}
void loop()
{ 
  digitalWrite(l1,1);
  delay(2000);
  digitalWrite(l1,0);
  delay(2000);
}
