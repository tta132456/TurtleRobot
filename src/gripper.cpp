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
            IsServoOpen = true;
        }   

        void Close(){
             for(int pos = 0; pos <= 90; pos++){
                MyServo.write(pos); 
                delay(10); 
            }
            IsServoOpen = true;
        }
    public:
        Servo MyServo;
        Gripper(int servoPin){
            MyServo.attach(servoPin); //No need to track the servo pin, already set inside of MyServo
            //Reset Servo Position to Open on init.
            Open();
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