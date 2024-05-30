#include "HS Sensor/hs.h"

NewPing sonar(TRIG, ECHO);

long get_distance() {
  long distance = sonar.ping_cm();
  delay(20);
      Serial.println(distance);
  return distance;
}