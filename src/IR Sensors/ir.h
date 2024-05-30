#ifndef IR_H
#define IR_H

#include <Arduino.h>
#include <Pins/pins.h>

//Global variables:
extern bool left_s;
extern bool right_s;
extern bool middle_s;
extern int store_last_direction;
extern bool seeing_anything;

//Functions
void reload_sensors();
int get_direction();

#endif