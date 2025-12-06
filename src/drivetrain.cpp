#include "drivetrain.h"
#include <Arduino.h>

DriveTrain::DriveTrain(int TopRightPin1, int TopRightPin2,int TopLeftPin1, int TopLeftPin2,
               int BottomRightPin1, int BottomRightPin2,
               int BottomLeftPin1, int BottomLeftPin2)
    : top(TopRightPin1, TopRightPin2, TopLeftPin1, TopLeftPin2),
      bottom(BottomRightPin1, BottomRightPin2, BottomLeftPin1, BottomLeftPin2)
{
}


void DriveTrain::Stop() {
    digitalWrite(top.RightPin1, LOW);
    digitalWrite(top.RightPin2, LOW);
    digitalWrite(top.LeftPin1, LOW);
    digitalWrite(top.LeftPin2, LOW);

    digitalWrite(bottom.RightPin1, LOW);
    digitalWrite(bottom.RightPin2, LOW);
    digitalWrite(bottom.LeftPin1, LOW);
    digitalWrite(bottom.LeftPin2, LOW);
}

void DriveTrain::MoveForwards() {
    // The top should rotate counter clockwise
    //01 For forwards
    top.MoveForwardRight();

    top.MoveForwardLeft();

    bottom.MoveForwardRight();

    bottom.MoveForwardLeft();
}

void DriveTrain::MoveBackwards() {

    //10 For backwards
    top.MoveBackwardRight();

    top.MoveBackwardLeft();

    bottom.MoveBackwardRight();

    bottom.MoveBackwardLeft();
}

void DriveTrain::RotateCounterClockwise(){
    digitalWrite(top.RightPin1, LOW);
    digitalWrite(top.RightPin2, HIGH);

    digitalWrite(top.LeftPin1, LOW);
    digitalWrite(top.LeftPin2, HIGH);

    digitalWrite(bottom.RightPin1, HIGH);
    digitalWrite(bottom.RightPin2, LOW);

    digitalWrite(bottom.LeftPin1, HIGH);
    digitalWrite(bottom.LeftPin2, LOW);
}

// void DriveTrain::RotateClockwise(){
    
// }

// void DriveTrain::MoveRight(){

// }

// void DriveTrain::MoveLeft(){

// }