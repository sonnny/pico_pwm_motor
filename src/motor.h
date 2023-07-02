// motor.h

#include "pico/stdlib.h"

struct motor_type{
  uint gpio;
  uint slice;
  uint chan;
  uint speed;
  uint freq;
  uint resolution;
  bool on;};

void motorInit(struct motor_type *m, uint, uint);
void motorSpeed(struct motor_type *m, uint);
void motorOn(struct motor_type *m);

