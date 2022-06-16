#ifndef __CONSOLEAPP_H
#define __CONSOLEAPP_H

using namespace std;

#include "App.h"

class ConsoleApp : public App {
    public:
    ConsoleApp(Machine* m, TemperatuurDisplay* td1, TemperatuurDisplay* td2);
    virtual ~ConsoleApp();
    virtual void render();

};
#endif