#ifndef __MOTOR_H
#define __MOTOR_H

using namespace std;

#include "Observer.h"

class TSensor;

class Motor : public Subject
{
private:
    TSensor* Tsensor;
protected:
    virtual void notify();
public:
    virtual TSensor* tsensor() const = 0;
    virtual void start() = 0;
    virtual void stop() = 0;
};
#endif