#include <Arduino.h>

const int ledPin = 13; // pin that the LED is connected to
const int buttonPin = 2; // pin that the button is connected to

int buttonState = 0; // current state of button

void setup() {
  // I/O
  pinMode(ledPin, OUTPUT); // set LED as output (O)
  pinMode(buttonPin, INPUT); // set button as input (I)
}

void loop() {
  // read current state
  buttonState = digitalRead(buttonPin);

  // if the button is pressed (e.g. HIGH, 1)
  if (buttonState == HIGH) {
    // turn LED on
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off
    digitalWrite(ledPin, LOW);
  }
}
