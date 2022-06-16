#ifndef __TEMPERATUURDISPLAY_H
#define __TEMPERATUURDISPLAY_H

using namespace std;
class Motor;

#include "Observer.h"

class TemperatuurDisplay : public Observer
{
public:
    TemperatuurDisplay(Motor* motor);
    virtual void update();
    virtual void schijf(int);
};
#endif