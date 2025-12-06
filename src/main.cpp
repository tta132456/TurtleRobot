#include <Arduino.h>
#include "drivetrain.h"
#include <TurtleReceiver.h>

NetController Controller;
DriveTrain RobotDriveTrain(17,16,18,5,14,27,26,25);

void setup() {
  // put your setup code here, to run once:
  Controller.controllerSetup();
 
}


void loop() {
  if (Controller.getJoy1Y() < 0) {
    RobotDriveTrain.MoveForwards();
  }else if (Controller.getJoy1Y() > 0) {
    RobotDriveTrain.MoveBackwards();
  } else if (Controller.getJoy1X() > 0){
    RobotDriveTrain.RotateClockwise();
  } else if (Controller.getJoy1X() < 0){
    RobotDriveTrain.RotateCounterClockwise();
  } else {
    RobotDriveTrain.Stop();
  }
}
