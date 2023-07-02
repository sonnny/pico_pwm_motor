// blink.c
// demo of single pwm motor control
// code from https://www.i-programmer.info/programming/hardware/14849-the-pico-in-c-basic-pwm.html

#include "pico/stdlib.h"
#include "motor.h"

struct motor_type motor;

int main(void) {
  motorInit(&motor, 2, 2000); // gpio2, 2khz frequency
  motorSpeed(&motor, 30);     // 30 percent speed
  motorOn(&motor);
  return 0;}
