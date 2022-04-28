#ifndef POSITIONABLE_H
#define POSITIONABLE_H

class Positionable {
    private:
        int X;
        int Y;
    
    public:
        Positionable(int, int);
        int x();
        int y();
        void move(int, int);
};

#endif //POSITIONABLE_H

