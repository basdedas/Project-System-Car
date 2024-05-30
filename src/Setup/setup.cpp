#include <Setup/setup.h>

Servo servo;
Servo steering;

void Initialize(){
    
  pinMode(RIR, INPUT);
  pinMode(LIR, INPUT);
  pinMode(MIR, INPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(R_IS, OUTPUT);
  pinMode(R_EN, OUTPUT);
  pinMode(R_PWM, OUTPUT);
  pinMode(L_IS, OUTPUT);
  pinMode(L_EN, OUTPUT);
  pinMode(L_PWM, OUTPUT);
  digitalWrite(R_IS, LOW);
  digitalWrite(L_IS, LOW);
  digitalWrite(R_EN, HIGH);
  digitalWrite(L_EN, HIGH);

  Serial.begin(9600); 

  servo.attach(SERVO); 
  steering.attach(STEERING); 
} 