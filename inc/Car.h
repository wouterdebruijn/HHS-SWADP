#ifndef CAR_H
#define CAR_H

class Speed;

class Car
{
private:
    Speed *speed;

public:
    Car(Speed *);
    void measureSpeed();
};

#endif // CAR_H