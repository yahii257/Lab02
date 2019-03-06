const int LEDs[] = {9,10,11,12,13,14,15,16,17};
int i;
int j=0;

void setup()
{
  for(i=0;i<8;i++)
    {
       pinMode(LEDs[i],OUTPUT);
    }
}
void loop()
{
  for(i=0;i<8;i++)
  {
    digitalWrite(LEDs[i],HIGH);
    delay(100);
    digitalWrite(LEDs[i],LOW);
  }
  for(i=7;i>=0;i--)
  {
    digitalWrite(LEDs[i],HIGH);
    delay(100);
    digitalWrite(LEDs[i],LOW);
  }
}
