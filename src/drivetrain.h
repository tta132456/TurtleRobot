#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H

#include "motor.h"  

class DriveTrain {
private:
    Motor FrontRight;
    Motor FrontLeft;
    Motor BackRight;
    Motor BackLeft;

public:
    DriveTrain(int TopRightPin1, int TopRightPin2,
               int TopLeftPin1, int TopLeftPin2,
               int BottomRightPin1, int BottomRightPin2,
               int BottomLeftPin1, int BottomLeftPin2);

    void Stop();
    void MoveForwards();
    void MoveBackwards();
    void RotateCounterClockwise();
    void RotateClockwise();
    void MoveRight();
    void MoveLeft();
};

#endif
