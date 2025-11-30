#include "car.h"
#include <iostream>

Engine Car::getEngine() const
{
    return engine;
}

void Car::setEngine(int horsepower, double displacement)
{
    engine.setHorsepower(horsepower);
    engine.setDisplacement(displacement);
}

void Car::printDetails()
{
    std::cout << "Auto: " << brand << " " << model <<std::endl;
    std::cout << "Moottori: " << engine.getHorsepower()<< " hp, " << engine.getDisplacement()<< " L" <<std::endl;

    for (int i = 0; i < 4; ++i) {
        std::cout << "Rengas " << (i + 1) << ": "<< wheels[i].getSize() << " tuumaa, " << wheels[i].getType() <<std::endl;

    }
}


std::string Car::getModel() const
{
    return model;
}

void Car::setModel(const std::string &newModel)
{
    model = newModel;
}

std::string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const std::string &newBrand)
{
    brand = newBrand;
}



void Car::setWheels(int size, const std::string& type)
{
    for (int i = 0; i < 4; ++i) {
        wheels[i].setSize(size);
        wheels[i].setType(type);
    }
}

Car::Car() {}

Car::Car(std::string model, std::string brand)
{
    this->model=model;
    this->brand=brand;

}
