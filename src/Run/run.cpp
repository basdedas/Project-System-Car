#include <Run/run.h>

int current_direction = 0;

/* Gets the direction and returns an int with the according direction, the directions are the following:
    0 = Nothing has happened yet
    1 = Forward
    2 = Left
    3 = Soft left
    4 = Right
    5 = Soft right
*/

void Go(){
    
    current_direction = get_direction();
    while (current_direction == 0){
        current_direction = get_direction();
        delay(1);
    }
    //Continuously run this switch
    switch (current_direction)
        {
        case 1: Controller("Forward"); break;
        case 2: Controller("left"); break;
        case 3: Controller("s_left"); break;
        case 4: Controller("right"); break;
        case 5: Controller("s_right"); break;
        default:
            Serial.println("Something went wrong trying to run");
        }
    Forward(70);
}