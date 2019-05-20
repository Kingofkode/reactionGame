#include <Arduino.h>

int bulbPin = 12;
int greenButtonPin = A5;
int yellowButtonPin = A0;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(bulbPin, OUTPUT);

  pinMode(greenButtonPin, INPUT);
  pinMode(yellowButtonPin, INPUT);

  digitalWrite(bulbPin, LOW);
}

void loop() {
  // Green Button
  int greenButtonValue = analogRead(greenButtonPin);
  if (greenButtonValue > 1000) {
    digitalWrite(bulbPin, HIGH);
  }else{
    digitalWrite(bulbPin, LOW);
  }
  // Yellow Button
  int yellowButtonValue = analogRead(yellowButtonPin);
  if (yellowButtonValue > 1000) {
    digitalWrite(bulbPin, HIGH);
  }else{
    digitalWrite(bulbPin, LOW);
  }
}