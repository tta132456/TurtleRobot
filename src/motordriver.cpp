#include "motordriver.h"
#include <Arduino.h>

MotorDriver::MotorDriver(int topMotorPin1, int topMotorPin2, int bottomMotorPin1, int bottomMotorPin2)
    : TopMotorPin1(topMotorPin1),
      TopMotorPin2(topMotorPin2),
      BottomMotorPin1(bottomMotorPin1),
      BottomMotorPin2(bottomMotorPin2)
{
    pinMode(TopMotorPin1, OUTPUT);
    pinMode(TopMotorPin2, OUTPUT);
    pinMode(BottomMotorPin1, OUTPUT);
    pinMode(BottomMotorPin2, OUTPUT);
}