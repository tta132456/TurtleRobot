#include "motordriver.h"
#include <Arduino.h>

MotorDriver::MotorDriver(int rightPin1, int rightPin2, int leftPin1, int leftPin2)
    : RightMotor(rightPin1, rightPin2),
      LeftMotor(leftPin1, leftPin2){}

        void MotorDriver::MoveForwardRight(){
            RightMotor.moveFoward();
        }

        void MotorDriver::MoveForwardLeft(){
            LeftMotor.moveFoward();
        }

        void MotorDriver::MoveBackwardRight(){
            RightMotor.moveBackwards();
        }

        void MotorDriver::MoveBackwardLeft(){
            LeftMotor.moveBackwards();
        }

        void MotorDriver::Stop(){
            RightMotor.stop();
            LeftMotor.stop();
        }
        

Motor::Motor(int pin1, int pin2) : Pin1(pin1), Pin2(pin2){
        pinMode(Pin1, OUTPUT);
        pinMode(Pin2, OUTPUT);
}

    void Motor::moveFoward(){
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, HIGH);
    }

    void Motor::moveBackwards(){
        digitalWrite(Pin1, HIGH);
        digitalWrite(Pin2, LOW);
    }

    void Motor::stop(){
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
    }
