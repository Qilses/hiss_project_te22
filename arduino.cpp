#include <Servo.h> 

Servo servoRight;

const int buttonUP 2;
const int buttonDown 3;

void setup(){
  servoRight.attach(10);
  pinMode(buttonUP, Input)
  pinMode(buttonDown, Input)
  servoRight.write(90)

 
}

void elevatorMotion() {
  if(buttonUP == high) {
    servoRight.write(180)
  } else if(buttonDOWN == HIGH){
    servoRight.readMicroseconds(0)
  } else {
    servoRight.write(90)
  }

}
