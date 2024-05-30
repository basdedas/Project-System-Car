#ifndef RUN_H
#define RUN_H

#include <Arduino.h>
#include <IR Sensors/ir.h>
#include <Motor/motor.h>
#include <Steering/steering.h>
#include <Pins/pins.h>
#include <HS Sensor/hs.h>
#include <Servo/servo.h>

extern int current_direction;

void Go();

#endif