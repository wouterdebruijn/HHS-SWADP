#include "Speed.h"

#include <iostream>

Speed::Speed() : value(0.0){};

float Speed::getValue() { return value; };

void Speed::messure()
{
    std::cout << "Enter the speed: ";
    std::cin >> value;

    // Notify all observers
    notify();
};