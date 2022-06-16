#ifndef __APP_H
#define __APP_H

using namespace std;

class TemperatuurDisplay;
class Machine;

class App
{
public:
    App(Machine *m, TemperatuurDisplay *td1, TemperatuurDisplay *td2);
    virtual ~App() {};
    virtual void run();
    virtual void halt();
    virtual TemperatuurDisplay *display1() const;
    virtual TemperatuurDisplay *display2() const;

private:
    Machine *M;
    TemperatuurDisplay *TD1;
    TemperatuurDisplay *TD2;
};
#endif