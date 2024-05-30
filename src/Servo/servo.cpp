#include <Servo/servo.h>

void move_to_detect_obstacle(){
    servo.write(180);
}
void move_back(){
    servo.write(90);
}