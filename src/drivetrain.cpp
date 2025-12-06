#include "drivetrain.h"
#include <Arduino.h>

DriveTrain::DriveTrain(int RightTopMotorPin1, int RightTopMotorPin2, int RightBottomMotorPin1, int RightBottomMotorPin2,
                       int LeftTopMotorPin1, int LeftTopMotorPin2, int LeftBottomMotorPin1, int LeftBottomMotorPin2)
    : right(RightTopMotorPin1, RightTopMotorPin2, RightBottomMotorPin1, RightBottomMotorPin2),
      left(LeftTopMotorPin1, LeftTopMotorPin2, LeftBottomMotorPin1, LeftBottomMotorPin2)
{
}

void DriveTrain::Stop() {
    digitalWrite(right.TopMotorPin1, LOW);
    digitalWrite(right.TopMotorPin2, LOW);
    digitalWrite(left.TopMotorPin1, LOW);
    digitalWrite(left.TopMotorPin2, LOW);
}

void DriveTrain::MoveForwards() {
    digitalWrite(right.TopMotorPin1, HIGH);
    digitalWrite(right.TopMotorPin2, LOW);
    digitalWrite(left.TopMotorPin1, HIGH);
    digitalWrite(left.TopMotorPin2, LOW);
}

void DriveTrain::MoveBackwards() {

}

// void DriveTrain::RotateCounterClockwise(){

// }

// void DriveTrain::RotateClockwise(){
    
// }

// void DriveTrain::MoveRight(){

// }

// void DriveTrain::MoveLeft(){

// }