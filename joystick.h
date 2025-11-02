#ifndef Joystick_h
#define Joystick_h

#include <Arduino.h>
#include <stdint.h>
#include <stdbool.h>

uint8_t __x, __y, __button;

// Initialization of the PS2 joystick. TIP: Add pull-up resistors to avoid contact rattling.
void initJoystick(uint8_t analog_x, uint8_t analog_y, uint8_t digital_button) {
  __x = analog_x;
  __y = analog_y;
  __button = digital_button;
  pinMode(__button, INPUT);
};

// Returns a boolean value: true (1) if not pressed, false (0) if pressed.
bool getJoyButton(void) {
  return digitalRead(__button);
};

// Returns X axis
uint16_t getJoyX(void) {
  return analogRead(__x);
};

// Returns Y axis
uint16_t getJoyY(void) {
  return analogRead(__y);
};

#endif