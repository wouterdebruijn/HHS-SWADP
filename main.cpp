#include <iostream>

#include "Position.h"
#include "Robot.h"

int main(int, char **)
{
    Position position(5, 10);
    Robot robot(&position);
    robot.run();
    robot.show();
    return 0;
}
