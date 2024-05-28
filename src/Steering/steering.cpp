#include<Arduino.h>
#include <Pins/pins.h>
#include <Servo.h>

void Controller(int angle){
    steering.write(angle);
}

void Controller(String s){
    if(s == "left"){
        Controller(-90);
    } else if(s == "right"){
        Controller(90);
    } else if(s == "s_left"){
        Controller(-45);
    } else if(s == "s_right"){
        Controller(45);
    } else if(s == "Forward"){
        Controller(0);
    } else {
        Serial.println("Something went wrong trying to steer");
        return;
    }
    
}

void Quit(){
    Controller(0);
}