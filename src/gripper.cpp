#include <ESP32Servo.h>

class Gripper{

    private:
        Servo MyServo;
        bool IsServoOpen;

        //Linear close.
        void Open(){
            for(int pos = 90; pos >= 0; pos--){
                MyServo.write(pos); 
                delay(10); 
            }
        }   

        void Close(){
             for(int pos = 0; pos <= 90; pos++){
                MyServo.write(pos); 
                delay(10); 
            }
        }
    public:
        Servo MyServo;
        Gripper(int servoPin){
            MyServo.attach(servoPin); //No need to track the servo pin, already set inside of MyServo

            //TODO.Reset Servo Position to Open on init.
        }

        void Grip(){
            if(IsServoOpen){
                Close();
            }
            else{
                Open();
            }
        }
};