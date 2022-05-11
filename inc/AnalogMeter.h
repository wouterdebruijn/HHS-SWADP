#ifndef ANALOG_METER_H
#define ANALOG_METER_H

#include "Observer.h"

class AnalogMeter : public Observer
{
public:
  AnalogMeter(Subject *);
  virtual void update();
};

#endif // ANALOG_METER_H