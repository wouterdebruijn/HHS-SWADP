#ifndef DIGITAL_METER_H
#define DIGITAL_METER_H

#include "Observer.h"

class DigitalMeter : public Observer
{
public:
  DigitalMeter(Subject*);
  virtual void update();
};

#endif // DIGITAL_METER_H