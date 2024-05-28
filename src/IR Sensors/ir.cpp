#include <IR Sensors/ir.h>

bool left_s = false;
bool right_s = false;
int store_last_direction = 0;

/* Gets the direction and returns an int with the according direction, the directions are the following:
    0 = Nothing has happened yet
    1 = Forward
    2 = Left
    3 = Soft left
    4 = Right
    5 = Soft right
*/
void reload_sensors(){
    left_s = analogRead(LIR) < 100;
    right_s = analogRead(RIR) < 100;
}

int get_direction(){
    reload_sensors();
    if(left_s && right_s) {
        store_last_direction = 1;
        return 1;
    } else if(left_s && !right_s) {
        store_last_direction = 3;
        return 3;
    } else if(!left_s && right_s) {
        store_last_direction = 5;
        return 5;
    } else return store_last_direction;
}
 