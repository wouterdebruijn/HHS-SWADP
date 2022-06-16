#ifndef __CUSTOMMACHINE_H
#define __CUSTOMMACHINE_H

using namespace std;

#include "Machine.h"

class CustomMachine : public Machine
{
    public:
        CustomMachine(Motor* m1 , Motor* m2);
        virtual ~CustomMachine() {};
        virtual Motor* motor1() const;
        virtual Motor* motor2() const;
        virtual void run();
        virtual void halt();
    private:
        Motor* mone;
        Motor* mtwo;

};
#endif