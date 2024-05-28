#include "HS Sensor/hs.h"

NewPing sonar(TRIG, ECHO);

long get_distance() {
  long distance = sonar.ping_cm();
  Serial.println(distance);
  delay(20);
  return distance;
}