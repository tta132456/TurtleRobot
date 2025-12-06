#include "drivetrain.h"
#include <Arduino.h>

DriveTrain::DriveTrain(int TopRightPin1, int TopRightPin2,int TopLeftPin1, int TopLeftPin2,
               int BottomRightPin1, int BottomRightPin2,
               int BottomLeftPin1, int BottomLeftPin2)
    : FrontRight(TopRightPin1, TopRightPin2),
      FrontLeft(TopLeftPin1, TopLeftPin2),
      BackRight(BottomRightPin1, BottomRightPin2),
      BackLeft(BottomLeftPin1, BottomLeftPin2)
{
}


void DriveTrain::Stop() {
    FrontRight.Stop();
    FrontLeft.Stop();
    BackRight.Stop();
    BackLeft.Stop();
}

void DriveTrain::MoveForwards() {
    // The top should rotate counter clockwise
    //01 For forwards
    FrontRight.MoveForward();

    FrontLeft.MoveForward();

    BackLeft.MoveForward();

    BackRight.MoveForward();
}

void DriveTrain::MoveBackwards() {

    //10 For backwards
    FrontRight.MoveBackwards();

    FrontLeft.MoveBackwards();

    BackLeft.MoveBackwards();

    BackRight.MoveBackwards();
}

void DriveTrain::RotateCounterClockwise() {
    FrontRight.MoveForward();

    BackRight.MoveForward();

    FrontLeft.MoveBackwards();

    BackLeft.MoveBackwards();
    
}

void DriveTrain::RotateClockwise(){
    FrontRight.MoveBackwards();

    BackRight.MoveBackwards();

    FrontLeft.MoveForward();

    BackLeft.MoveForward();
}

void DriveTrain::MoveRight(){
    FrontRight.MoveBackwards();

    BackRight.MoveForward();

    FrontLeft.MoveForward();

    BackLeft.MoveBackwards();
}

void DriveTrain::MoveLeft(){
    
}