#ifndef POSITION_H
#define POSITION_H

class Position {
    private:
        int X;
        int Y;
    
    public:
        Position(int, int);
        int x();
        int y();
        void move(int, int);
};

#endif //POSITION_H