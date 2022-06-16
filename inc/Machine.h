#ifndef __MACHINE_H
#define __MACHINE_H

using namespace std;

class Motor;
class Mone;
class Mtwo;

class Machine
{
private:
    Mone* mone;
    Mtwo* mtwo;
public:
    virtual Motor* motor1() = 0;
    virtual Motor* motor2() = 0;
    virtual void run() = 0;
    virtual void halt() = 0;
};
#endif