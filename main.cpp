#include "StepperMotor.h"
#include "CustomMachine.h"
#include "Thermocouple.h"
#include "TemperatuurDisplay.h"
#include "ConsoleApp.h"

int main(int argc, char const *argv[])
{
    Thermocouple* t1 = new Thermocouple();
    Thermocouple* t2 = new Thermocouple();

    TemperatuurDisplay* td1 = new TemperatuurDisplay(t1);
    TemperatuurDisplay* td2 = new TemperatuurDisplay(t2);

    StepperMotor* motor1 = new StepperMotor(t1);
    StepperMotor* motor2 = new StepperMotor(t2);

    CustomMachine* machine = new CustomMachine(motor1, motor2);

    ConsoleApp* consoleApp = new ConsoleApp(machine, td1, td2);

    while (1) {
        t1->read();
        t2->read();
        consoleApp->render();
    }
    return 0;
}
