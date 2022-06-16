#include "Thermocouple.h"
#include "StepperMotor.h"
#include "CustomMachine.h"

#include "TemperatuurDisplay.h"
#include "ConsoleApp.h"

int main(int argc, char const *argv[])
{
    Thermocouple* t1 = new Thermocouple();
    Thermocouple* t2 = new Thermocouple();

    StepperMotor* motor1 = new StepperMotor(t1);
    StepperMotor* motor2 = new StepperMotor(t2);

    CustomMachine machine(motor1, motor2);
    
    return 0;
}
