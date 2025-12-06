#ifndef MOTORDRIVER_H
#define MOTORDRIVER_H

class MotorDriver{
    public:
        int TopMotorPin1; 
        int TopMotorPin2; 
        int BottomMotorPin1; 
        int BottomMotorPin2;

        MotorDriver(int topMotorPin1, int topMotorPin2, int bottomMotorPin1, int bottomMotorPin2);
};

#endif