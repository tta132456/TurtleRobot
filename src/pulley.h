#ifndef PULLEY_H
#define PULLEY_H
#include <motor.h>


#define MAX_PULLEY_ON_TIME 1
    class Pulley{

        private:
            Motor PulleyMotor;

        public:
            Pulley(int pin1, int pin2);

            //Run a certain direction if called.
            void RaiseGripper();

            void LowerGripper();

            void StopGripper();
    };

#endif