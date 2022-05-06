#ifndef ROBOT_H
#define ROBOT_H

class Location;

class Robot
{
private:
    Location *position;

public:
    virtual void run();
    virtual void show();
    Robot(Location *);
};

#endif // ROBOT_H