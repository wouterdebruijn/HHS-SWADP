#ifndef __TSENSOR_H
#define __TSENSOR_H

using namespace std;

class TSensor
{
public:
    virtual void read() = 0;
    virtual int temperatuur() = 0;
};
#endif