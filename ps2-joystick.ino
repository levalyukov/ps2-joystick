#include "joystick.h"

// the tests were conducted on an Arduino Nano.

void setup(void) {
  Serial.begin(9600);
  initJoystick(A6, A7, 3);
};

void loop(void) {
  Serial.print("Button is pressed: ");
  Serial.print(getJoyButton());
  Serial.print(" | X: ");
  Serial.print(getJoyX());
  Serial.print(" | Y: ");
  Serial.print(getJoyY());
  Serial.print("\n");
};