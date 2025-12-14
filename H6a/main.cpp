#include "myclass.h"
#include <QDebug>
#include <iostream>
#include <QLoggingCategory>
using namespace std;

int main()
{


    qDebug() << "Testi: qDebug toimii?";

    MyClass objectA;

    objectA.raiseMySignal();

    return 0;
}
