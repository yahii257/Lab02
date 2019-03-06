const byte leds[]={8,9,10,11,12,13,14,15};
const byte NUM=sizeof(leds); 
int i;
int count;
int t;
  void setup()
  {
  for(int i=0;i<NUM;i++)
  {
    pinMode(leds[i],OUTPUT);
   
  }
  pinMode(6,INPUT);
}

void loop()
{
  t = digitalRead(6);
  if( t== HIGH)
  {
      for(i=0;i<NUM;i++)
 {
   digitalWrite(leds[i],HIGH);
   delay(100);
   digitalWrite(leds[i],LOW);
  }
    for(i=NUM;i>=0;i--)
  {
   digitalWrite(leds[i],HIGH);
   delay(100);
   digitalWrite(leds[i],LOW);
  }
    
  }
  else
  {
  for(i=0;i<2;i++)
  {
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);  
  digitalWrite(15,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(14,HIGH);
  delay(400);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  digitalWrite(14,LOW);
  digitalWrite(15,LOW);
  delay(400);
  }
  }
}
