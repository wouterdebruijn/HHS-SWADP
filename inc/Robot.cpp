#include "Robot.h"

#include <iostream>

void Robot::run()
{
    position->move(10, 20);
}

void Robot::show()
{
    std::cout << position->x() << "," << position->y() << std::endl;
}

Robot::Robot(Location *position)
{
    this->position = position;
}