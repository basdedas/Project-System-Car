#include <IR Sensors/ir.h>

bool left_s = false;
bool right_s = false;
bool middle_s = false;
bool seeing_anything = true;
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
    middle_s = analogRead(MIR) < 100;
}

int get_direction(){
    reload_sensors();
    if(middle_s || right_s || left_s){
        seeing_anything = true;
    }
    if(middle_s && right_s){
        store_last_direction = 5;
            Serial.println("soft right");

        return 5;
    } else if(middle_s && left_s) {
        store_last_direction = 3;
            Serial.println("soft left");

        return 3;
    } else if(right_s) {
        store_last_direction = 4;
            Serial.println("right");

        return 4;
    } else if(left_s) {
        store_last_direction = 2;
            Serial.println("left");

        return 2;
    } else if (middle_s) {
                store_last_direction = 1;
            Serial.println("forward");

        return 1;
    } else if (middle_s && right_s && left_s){
        return 0;
    } else{
        if(store_last_direction % 2 == 0 || store_last_direction <= 1){
            return store_last_direction;
        } else {
            return store_last_direction - 1;
        }
        seeing_anything = false;
    }

    }

 