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

