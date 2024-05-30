#include <Steering/steering.h>

void Controller(int angle){
    steering.write(angle);
}

void Controller(String s){
    if(s == "right"){
        Controller(0);
    } else if(s == "left"){
        Controller(180);
    } else if(s == "s_right"){
        Controller(80);
    } else if(s == "s_left"){
        Controller(100);
    } else if(s == "Forward"){
        Controller(90);
    } else {
        Serial.println("Something went wrong trying to steer");
        return;
    }       
}

void Quit(){
    Controller(0);
}

void obstacleAvoidance(){
    Controller("right");
    move_to_detect_obstacle();
    while(get_distance() < 40){
        Forward(30);
    }
    Controller(180);
    while(!seeing_anything){
        Forward(30);
    }
    move_back();
}