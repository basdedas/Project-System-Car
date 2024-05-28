#ifndef PINS_H
#define PINS_H

#include <Arduino.h>
#include <Servo.h>

extern Servo servo; 
extern Servo steering;


const int RIR = A0; 
const int LIR = A1; 
const int TRIG = 23; 
const int ECHO = 25; 
const int SERVO = 8; 
const int STEERING = 9; 
const int R_IS = 4; 
const int R_EN = 2;
const int R_PWM = 3;
const int L_IS = 7;
const int L_EN = 5;
const int L_PWM = 6;

#endif // PINS_H
