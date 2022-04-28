#ifndef ROBOT_H
#define ROBOT_H

#include "Positionable.h"

class Robot {
    private:
        Positionable *position;
    public:
        void run();
        void show();
        Robot(Positionable*);
};

#endif //ROBOT_H