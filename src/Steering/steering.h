#ifndef STEERING_H
#define STEERING_H

#include <WString.h>
#include<Arduino.h>
#include <Pins/pins.h>
#include <Servo.h>
#include <Motor/motor.h>
#include <IR Sensors/ir.h>
#include <Servo/servo.h>
#include <HS sensor/hs.h>

void Controller(int angle);
void Controller(String s);
void Quit();
void obstacleAvoidance();

#endif