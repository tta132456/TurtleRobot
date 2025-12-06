#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H

#include "motordriver.h"  

class DriveTrain {
private:
    MotorDriver right;
    MotorDriver left;

public:
    DriveTrain(int RightTopMotorPin1, int RightTopMotorPin2,
               int RightBottomMotorPin1, int RightBottomMotorPin2,
               int LeftTopMotorPin1, int LeftTopMotorPin2,
               int LeftBottomMotorPin1, int LeftBottomMotorPin2);

    void Stop();
    void MoveForwards();
    void MoveBackwards();
};

#endif
