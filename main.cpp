#include "Speed.h"
#include "Car.h"

#include "DigitalMeter.h"
#include "AnalogMeter.h"

int main()
{
    Speed speed;
    
    DigitalMeter digitalMeter(&speed);
    AnalogMeter analogMeter(&speed);

    Car car(&speed);
    car.measureSpeed();
    return 0;
}