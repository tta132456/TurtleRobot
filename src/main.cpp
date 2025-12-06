#include <Arduino.h>
#include "drivetrain.h"

#define RightTopMotorPin1 27
#define RightTopMotorPin2 26

#define RightBottomMotorPin1 12
#define RightBottomMotorPin2 14

#define LeftTopMotorPin1 25
#define LeftTopMotorPin2 33

#define LeftBottomMotorPin1 32
#define LeftBottomMotorPin2 35

DriveTrain RobotDriveTrain(RightTopMotorPin1, RightTopMotorPin2, RightBottomMotorPin1,
   RightBottomMotorPin2, LeftTopMotorPin1, LeftTopMotorPin2, LeftBottomMotorPin1, LeftBottomMotorPin2);


void setup() {
  // put your setup code here, to run once:
  
}


void loop() {
  // put your main code here, to run repeatedly:   
  RobotDriveTrain.MoveForwards();
  delay(5000);
  RobotDriveTrain.Stop();
}
