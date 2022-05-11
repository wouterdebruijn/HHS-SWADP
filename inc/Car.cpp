#include "Car.h"
#include "Speed.h"

Car::Car(Speed *speed) : speed(speed){};
void Car::measureSpeed() { speed->measure(); };