const int analogPin = A0;     
const int digitalPin = 8;    
const int buzzerPin = 6;     
void setup() {
  Serial.begin(9600);        
  pinMode(digitalPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int analogValue = analogRead(analogPin);    
  int digitalValue = digitalRead(digitalPin);  

  
  Serial.print("Analog Value: ");
  Serial.print(analogValue);
  Serial.print(" - Digital Value: ");
  Serial.println(digitalValue);

  
  if (digitalValue == HIGH) {
    digitalWrite(buzzerPin, HIGH);  
  } else {
    digitalWrite(buzzerPin, LOW);  
  }

  delay(1000);  
}

