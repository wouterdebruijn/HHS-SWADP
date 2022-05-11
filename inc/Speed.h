#ifndef SPEED_H
#define SPEED_H

#include "Observer.h"

class Speed : public Subject
{
private:
    float value;

public:
    Speed();
    void messure();
    float getValue();
};

#endif // SPEED_H