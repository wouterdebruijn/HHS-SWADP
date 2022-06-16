#ifndef __MOTOR_H
#define __MOTOR_H

using namespace std;

class TSensor;

class Motor
{
private:
    TSensor* Tsensor;
public:
    Motor() {}
    virtual ~Motor() {};
    virtual TSensor* tsensor() const = 0;
    virtual void start() = 0;
    virtual void stop() = 0;
};
#endif