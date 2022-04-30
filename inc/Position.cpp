#include "Position.h"

int Position::x()
{
    return X;
}

int Position::y()
{
    return Y;
}

void Position::move(int dx, int dy)
{
    this->X = this->X + dx;
    this->Y = this->Y + dy;
}

Position::Position(int x, int y) : X(x), Y(y) {}