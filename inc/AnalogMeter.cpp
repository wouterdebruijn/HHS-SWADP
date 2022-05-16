#include "AnalogMeter.h"
#include "Speed.h"

#include <iostream>

// Base class registers the observer to the subject
AnalogMeter::AnalogMeter(Subject *s) : Observer(s) {};

void AnalogMeter::update() {
  Speed* speed = dynamic_cast<Speed*>(getSubject());

  if (speed != nullptr) {
    std::cout << "The analog speed is: " << speed->getValue() << std::endl;
  }
}