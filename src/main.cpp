#include <Arduino.h>
#include "drivetrain.h"



DriveTrain RobotDriveTrain(17,16,18,5,14,27,26,25);

void setup() {
  // put your setup code here, to run once:
  
}


void loop() {
  // put your main code here, to run repeatedly:  

   RobotDriveTrain.Stop();
   delay(100);
}
