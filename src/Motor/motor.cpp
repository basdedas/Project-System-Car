#include <Motor/motor.h>

void Forward(int speed){
    int i;
    for(i = 0; i <= 100; i += speed){ 
        analogWrite(R_PWM, i);
        analogWrite(L_PWM, 0);
  }
}

void Stop(){
  analogWrite(R_PWM, 0);
  analogWrite(L_PWM, 0);
}