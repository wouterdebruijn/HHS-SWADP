#include "CustomMachine.h"
#include "Motor.h"

CustomMachine::CustomMachine(Motor* m1 , Motor* m2): mone(m1), mtwo(m2) {};

Motor* CustomMachine::motor1() const {
    return mone;
}

Motor* CustomMachine::motor2() const {
    return mtwo;
}

void CustomMachine::run() {
    mone->start();
    mtwo->start();
}

void CustomMachine::halt() {
    mone->stop();
    mtwo->stop();
}