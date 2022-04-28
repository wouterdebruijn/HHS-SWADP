#ifndef ROBOT_H
#define ROBOT_H

#include "Position.h"

class Robot {
    private:
        Position *position;
    public:
        void run();
        void show();
        Robot(Position*);
};

#endif //ROBOT_H