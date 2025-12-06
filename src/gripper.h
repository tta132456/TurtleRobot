#ifndef GRIPPER_H
#define GRIPPER_H

    #include <ESP32Servo.h>
    class Gripper{
        private:
            Servo MyServo;
            bool IsServoOpen;

            void Open();
            void Close();
        public:
        
            Gripper(int servoPin);
            void Grip();
    };

#endif