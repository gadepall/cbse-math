#include<Arduino.h>
// Pin definitions
const int pinA = 2;  // Connect A input to digital pin 2
const int pinB = 3;  // Connect B input to digital pin 3
const int pinF = 4;  // Connect F output to digital pin 4

void setup() {
  pinMode(pinA, INPUT);
  pinMode(pinB, INPUT);
  pinMode(pinF, OUTPUT);
}

void loop() {
  // Read the input values
  bool inputA = digitalRead(pinA);
  bool inputB = digitalRead(pinB);
  
  // Calculate the output (NOR gate)
  bool outputF = !(inputA || inputB);
  
  // Write the output value
  digitalWrite(pinF, outputF);
}
