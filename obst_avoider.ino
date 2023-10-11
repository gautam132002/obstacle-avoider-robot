#include <Ultrasonic.h>

const int triggerPin = 2;
const int echoPin = 3;
const int motorM1A = 4; 
const int motorM1B = 5;
const int motorM2A = 6;
const int motorM2B = 7;

Ultrasonic ultrasonic(triggerPin, echoPin);

const int maxDistance = 5.0;

void setup() {
  pinMode(motorM1A, OUTPUT);
  pinMode(motorM1B, OUTPUT);
  pinMode(motorM2A, OUTPUT);
  pinMode(motorM2B, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  
  int distance = ultrasonic.read(CM);

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < maxDistance) {
    digitalWrite(motorM1A, LOW);
    digitalWrite(motorM1B, HIGH);
    digitalWrite(motorM2A, HIGH);
    digitalWrite(motorM2B, LOW);
    Serial.println("Obstacle detected. Motor status: Turning left.");
  } else {
    digitalWrite(motorM1A, HIGH);
    digitalWrite(motorM1B, LOW);
    digitalWrite(motorM2A, HIGH);
    digitalWrite(motorM2B, LOW);
    Serial.println("No obstacle. Motor status: Both motors turning clockwise.");
  }

  delay(24e4j00); 
}
