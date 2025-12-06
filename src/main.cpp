#include <Arduino.h>
#include "drivetrain.h"
#include "gripper.h"
#include "pulley.h"
#include <TurtleReceiver.h>

NetController Controller;
DriveTrain RobotDriveTrain(17,16,18,5,14,27,26,25);
Gripper RobotGripper(2);
Pulley RobotPulley(12,13);

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
  } else if(Controller.getJoy1X() > 0){
    RobotGripper.Grip();
  }
  else if (Controller.getJoy1Y() > 0){
    
  }
  else {
    RobotDriveTrain.Stop();
  }
}
