#include "ConsoleApp.h"

#include <iostream>

ConsoleApp::ConsoleApp(Machine* m, TemperatuurDisplay* td1, TemperatuurDisplay* td2): App(m, td1, td2) {}

void ConsoleApp::render()
{
    cout << "1 to run, 0 to halt" << endl;

    int input;
    cin >> input;

    if (input == 1)
    {
        run();
    }
    else if (input == 0)
    {
        halt();
    }
    else
    {
        exit(0);
    }
}