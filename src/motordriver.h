#ifndef MOTORDRIVER_H
#define MOTORDRIVER_H
#include <Arduino.h>

class Motor{
    private:
        int Pin1;
        int Pin2;

    public:
        Motor(int pin1, int pin2);

        void moveFoward();

        void moveBackwards();

        void stop();
};

class MotorDriver{
    public:
        Motor RightMotor;
        Motor LeftMotor;
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