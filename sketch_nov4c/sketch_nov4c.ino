int trigger = 9;
int echo = 10;
int buzzer =6;
int distance;
int duration ;

void setup() {
    pinMode(trigger, OUTPUT);
    pinMode(echo, INPUT);
    pinMode(buzzer, OUTPUT);
}

void loop() {
    digitalWrite(trigger, LOW);
    delayMicroseconds(2);
    digitalWrite(trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigger, LOW);

    duration = pulseIn(echo, HIGH);

    distance = duration * 0.032 /2;
    Serial.print("Distance ");

    Serial.print(distance);

    Serial.print(" cm");

    if(buzzer <= 5)
    {
      digitalWrite(buzzer, HIGH);
    }
    else
    {
      digitalWrite(buzzer, LOW);
    }
    delay(20);
}
