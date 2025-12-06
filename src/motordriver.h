#ifndef MOTORDRIVER_H
#define MOTORDRIVER_H
#include <Arduino.h>

class MotorDriver{
    public:
        int RightPin1; 
        int RightPin2; 
        int LeftPin1; 
        int LeftPin2;

        MotorDriver(int rightPin1, int rightPin2, int leftPin1, int leftPin2);

        void MoveForwardRight();

        void MoveForwardLeft();

        void MoveBackwardRight();

        void MoveBackwardLeft();

        void Stop();

};

#endif