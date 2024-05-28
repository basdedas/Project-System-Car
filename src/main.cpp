#include <Setup/setup.h>
#include <Run/run.h>
#include <Motor/motor.h>

void setup() {
  Initialize();
}

void loop() {
  long current_distance = get_distance();

  if (current_distance > 30) {
    Go();  // If distance is greater than 30 cm, continue moving
  } else {
    Serial.println("OOOOOPS, TOO CLOSE!!!!");
    Stop();  // If distance is less than or equal to 30 cm, stop moving
  }
}


