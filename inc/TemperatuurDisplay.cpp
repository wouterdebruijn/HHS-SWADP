#include "TemperatuurDisplay.h"

#include "Motor.h"
#include "TSensor.h"

#include <iostream>

TemperatuurDisplay::TemperatuurDisplay(Motor* motor) : Observer(motor) {};

void TemperatuurDisplay::schijf(int temperatuur) {
    cout << "Temperatuur: " << temperatuur << endl;
}

void TemperatuurDisplay::update() {
    Motor* motor = dynamic_cast<Motor*>(this->getSubject());

    if (motor != nullptr) {
        int temp = motor->tsensor()->temperatuur();
        this->schijf(temp);
    }
}

