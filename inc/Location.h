#ifndef LOCATION_H
#define LOCATION_H

class Location
{
public:
    virtual int x() = 0;
    virtual int y() = 0;
    virtual void move(int, int) = 0;
};

#endif // LOCATION_H
