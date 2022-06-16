#include "Thermocouple.h"

#include <iostream>

Thermocouple::Thermocouple() {
    Temperatuur = 0;
}

void Thermocouple::read() {
    cout << "Temperature debug: ";
    cin >> Temperatuur;
    cout << "\n";
    notify();
}

int Thermocouple::temperatuur() {
    return Temperatuur;
}