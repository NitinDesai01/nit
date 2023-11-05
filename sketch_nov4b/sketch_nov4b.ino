
const int SENSOR_PIN = 7; 


int lastState = LOW;      
int currentState;         
int ledState = LOW;             

void setup() {
  
  Serial.begin(9600);
  
  pinMode(SENSOR_PIN, INPUT);
  
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  
  currentState = digitalRead(SENSOR_PIN);

  if(lastState == LOW && currentState == HIGH){
    
    if(ledState == LOW)
      ledState = HIGH;
    else if(ledState == HIGH)
      ledState = LOW;

    
    digitalWrite(LED_BUILTIN, ledState);
  }

  
  lastState = currentState;
}
