#include <iostream>

#include "Positionable.h"
#include "Robot.h"

int main(int, char **)
{
    Positionable position(5, 10);
    Robot robot(&position);
    robot.run();
    robot.show();

    return 0;
}
