#ifndef __Thermocouple_H
#define __Thermocouple_H

using namespace std;

#include "TSensor.h"

class Thermocouple : public TSensor
{
public:
    Thermocouple();
    virtual ~Thermocouple() {};
    virtual void read();
    virtual int temperatuur();
private:
    int Temperatuur;
};
#endif