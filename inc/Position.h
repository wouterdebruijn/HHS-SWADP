#ifndef POSITION_H
#define POSITION_H

#include "Location.h"

class Position : public Location
{
private:
    int X;
    int Y;

public:
    Position(int, int);
    virtual int x();
    virtual int y();
    virtual void move(int, int);
};

#endif // POSITION_H