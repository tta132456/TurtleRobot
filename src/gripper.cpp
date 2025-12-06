#include "gripper.h"

        Gripper::Gripper(int servoPin){
            MyServo.attach(servoPin); //No need to track the servo pin, already set inside of MyServo
            //Reset Servo Position to Open on init.
            Open();
        }
        //Linear close.
        void Gripper::Open(){
            for(int pos = 90; pos >= 0; pos--){
                MyServo.write(pos); 
                delay(10); 
            }
            IsServoOpen = true;
        }   

        void Gripper::Close(){
             for(int pos = 0; pos <= 90; pos++){
                MyServo.write(pos); 
                delay(10); 
            }
            IsServoOpen = true;
        }
     
        void Gripper::Grip(){
            if(IsServoOpen){
                Close();
            }
            else{
                Open();
            }
        }