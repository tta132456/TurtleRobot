#include "pulley.h"

void Pulley::RaiseGripper(){
    PulleyMotor.MoveForward();
};

void Pulley::LowerGripper(){
    PulleyMotor.MoveBackwards();
};

void Pulley::StopGripper(){
    PulleyMotor.Stop();
};