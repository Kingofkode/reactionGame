#include <Arduino.h>

int bulbPin = 12;
int greenButtonPin = A5;
int yellowButtonPin = A0;
// Adjust with each rewire
int analogThreshold = 670;
// 3 sec to 5 sec
int randomTime = random(3000, 5000);
bool isLightOn = false;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(bulbPin, OUTPUT);

  pinMode(greenButtonPin, INPUT);
  pinMode(yellowButtonPin, INPUT);

}

void loop() {
  // Green Button
  int greenButtonValue = analogRead(greenButtonPin);
  Serial.println(greenButtonValue);
  // if (greenButtonValue > analogThreshold) {
  //   digitalWrite(bulbPin, HIGH);
  // }else{
  //   digitalWrite(bulbPin, LOW);
  // }
  // // Yellow Button
  // int yellowButtonValue = analogRead(yellowButtonPin);
  // if (yellowButtonValue > analogThreshold) {
  //   digitalWrite(bulbPin, HIGH);
  // }else{
  //   digitalWrite(bulbPin, LOW);
  // }
}

void startTimer() {
  delay(randomTime);
  digitalWrite(bulbPin, HIGH);
  isLightOn = true;
}