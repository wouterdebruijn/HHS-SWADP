#include "App.h"

#include "Machine.h"

App::App(Machine* m, TemperatuurDisplay* td1, TemperatuurDisplay* td2): M(m), TD1(td1), TD2(td2) {};

TemperatuurDisplay* App::display1() const {
    return TD1;
}

TemperatuurDisplay* App::display2() const {
    return TD2;
}

void App::run() {
    M->run();
}

void App::halt() {
    M->halt();
}