#include "Positionable.h"

int Positionable::x() {
    return X;
}

int Positionable::y() {
    return Y;
}

void Positionable::move(int dx, int dy) {
    this->X = this->X + dx;
    this->Y = this->Y + dy;
}

Positionable::Positionable(int x, int y) {
    this->X = x;
    this->Y = y;
}