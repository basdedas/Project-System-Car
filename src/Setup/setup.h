#ifndef SETUP_H
#define SETUP_H

#include <Arduino.h>
#include <Pins/pins.h>
#include <Servo.h>

extern Servo servo;
extern Servo steering;

void Initialize();

#endif 