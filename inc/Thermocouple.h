#ifndef __THERMOCOUPLE_H
#define __THERMOCOUPLE_H

using namespace std;

#include "TSensor.h"

class Thermocouple : public TSensor
{
public:
    Thermocouple();
    virtual ~Thermocouple();
    virtual void read();
    virtual int temperatuur();
private:
    int Temperatuur;
};
#endif