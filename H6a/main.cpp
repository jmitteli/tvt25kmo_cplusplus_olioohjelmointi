#include "myclass.h"
#include <QDebug>
#include <iostream>
#include <QLoggingCategory>
using namespace std;

int main()
{



    MyClass objectA;

    objectA.raiseMySignal();

    return 0;
}
