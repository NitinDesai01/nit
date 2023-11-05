// declaration() 

  int led=LED_BUILTIN;
void setup()
{
  pinMode(led,OUTPUT);

}
void loop()
{
  digitalWrite(led,HIGH);
  Serial.println("On");
   delay(3000);
   digitalWrite(led,LOW);
     Serial.println("Off");

  delay(3000);

}
  