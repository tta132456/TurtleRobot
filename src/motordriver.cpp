#include "motordriver.h"
#include <Arduino.h>

MotorDriver::MotorDriver(int rightPin1, int rightPin2, int leftPin1, int leftPin2)
    : RightPin1(rightPin1),
      RightPin2(rightPin2),
      LeftPin1(leftPin1),
      LeftPin2(leftPin2)
    {
        pinMode(RightPin1, OUTPUT);
        pinMode(RightPin2, OUTPUT);
        pinMode(LeftPin1, OUTPUT);
        pinMode(LeftPin2, OUTPUT);
    }

        void MotorDriver::MoveForwardRight(){
            digitalWrite(RightPin1, LOW);
            digitalWrite(RightPin2, HIGH);
        }

        void MotorDriver::MoveForwardLeft(){
            digitalWrite(LeftPin1, LOW);
            digitalWrite(LeftPin2, HIGH);
        }

        void MotorDriver::MoveBackwardRight(){
            digitalWrite(RightPin1, HIGH);
            digitalWrite(RightPin2, LOW);
        }

        void MotorDriver::MoveBackwardLeft(){
            digitalWrite(LeftPin1, HIGH);
            digitalWrite(LeftPin2, LOW);
        }

        void MotorDriver::Stop(){
            digitalWrite(RightPin1, LOW);
            digitalWrite(RightPin2, LOW);
            digitalWrite(LeftPin1, LOW);
            digitalWrite(LeftPin2, LOW);
        }
        
class Motor{
    private:
        int Pin1;
        int Pin2;

    Motor(int pin1, int pin2) : Pin1(pin1), Pin2(pin2){}

    void moveFoward(){
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, HIGH);
    }

    void moveBackwards(){
        digitalWrite(Pin1, HIGH);
        digitalWrite(Pin2, LOW);
    }

    void stop(){
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
    }
};