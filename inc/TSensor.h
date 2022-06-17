#ifndef __TSENSOR_H
#define __TSENSOR_H

using namespace std;

#include "Observer.h"
class TSensor : public Subject
{
public:
    TSensor() {}
    virtual ~TSensor() {};
    virtual void read() = 0;
    virtual int temperatuur() = 0;
};
#endif