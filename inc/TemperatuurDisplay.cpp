#include "TemperatuurDisplay.h"

#include "TSensor.h"

#include <iostream>

TemperatuurDisplay::TemperatuurDisplay(TSensor* sensor) : Observer(sensor) {};

void TemperatuurDisplay::schijf(int temperatuur) {
    cout << "Temperatuur Display: " << temperatuur << endl;
}

void TemperatuurDisplay::update() {
    TSensor* sensor = dynamic_cast<TSensor*>(this->getSubject());

    if (sensor != nullptr) {
        int temp = sensor->temperatuur();
        this->schijf(temp);
    }
}

