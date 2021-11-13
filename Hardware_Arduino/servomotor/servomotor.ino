#include <Servo.h>

int servo1 = 9; //pwm

Servo servo;
int  angulo = 0;

void  setup (){
   servo.attach(servo1);
}

void loop () {

  for angle (angulo  = 0; angulo <180; angulo++){
      servo.write(angulo);
      delay(30);
  }

  for angle (angulo  = 180; angulo >0; angulo--){
      servo.write(angulo);
      delay(30);
  }

}
