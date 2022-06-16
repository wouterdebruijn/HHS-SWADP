#ifndef __STEPPERMOTOR_H
#define __STEPPERMOTOR_H

#include "Motor.h"
#include "TSensor.h"

class StepperMotor : public Motor
{
public:
    StepperMotor(TSensor*);
    virtual ~StepperMotor();
    virtual int voltage() const;
    virtual void start();
    virtual void stop();
    virtual TSensor* tsensor() const;
private: 
    int OutputVoltage;
    TSensor* S;
};
#endif