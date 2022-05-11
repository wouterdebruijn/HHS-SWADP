#include "DigitalMeter.h"
#include "Speed.h"

#include <iostream>

// Base class registers the observer to the subject
DigitalMeter::DigitalMeter(Subject *s) : Observer(s) {};

void DigitalMeter::update() {
  Speed* speed = dynamic_cast<Speed*>(getSubject());

  if (speed != nullptr) {
    std::cout << "The digital speed is: " << speed->getValue() << std::endl;
  }
}