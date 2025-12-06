#include "motor.h"
#include <Arduino.h>

Motor::Motor(int pin1, int pin2) : Pin1(pin1), Pin2(pin2){
        pinMode(Pin1, OUTPUT);
        pinMode(Pin2, OUTPUT);
}

    void Motor::MoveForward(){
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, HIGH);
    }

    void Motor::MoveBackwards(){
        digitalWrite(Pin1, HIGH);
        digitalWrite(Pin2, LOW);
    }

    void Motor::Stop(){
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
    }
