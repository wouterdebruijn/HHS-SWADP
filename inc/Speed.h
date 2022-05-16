#ifndef SPEED_H
#define SPEED_H

#include "Subject.h"

class Speed : public Subject
{
private:
    float value;

public:
    Speed();
    virtual void measure();
    virtual float getValue();
};

#endif // SPEED_H