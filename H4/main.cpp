#include "car.h"

#include <iostream>

using namespace std;

int main()
{
    Car objectCar("Corolla","Toyota");
    objectCar.setEngine(150,2);
    objectCar.setWheels(17,"kesarengas");

    objectCar.printDetails();

    return 0;
}
