#ifndef __TEMPERATUURDISPLAY_H
#define __TEMPERATUURDISPLAY_H

using namespace std;
class TSensor;

#include "Observer.h"

class TemperatuurDisplay : public Observer
{
public:
    TemperatuurDisplay(TSensor*);
    ~TemperatuurDisplay() {};
    virtual void update();
    virtual void schijf(int);
};
#endif