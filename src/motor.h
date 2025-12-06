#ifndef MOTORDRIVER_H
#define MOTORDRIVER_H
#include <Arduino.h>

class Motor{
    private:
        int Pin1;
        int Pin2;

    public:
        Motor(int pin1, int pin2);

        void MoveForward();

        void MoveBackwards();

        void Stop();
};



#endif