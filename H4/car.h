#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"


class Car
{
private:
    std::string model;
    std::string brand;

    Engine engine;
    Wheel wheels[4];
public:
    Car();
    Car(const std::string &model, const std::string &brand, const Engine &engine, Wheel (&wheel)[4]);
    Car(std::string model, std::string brand);

    std::string getModel() const;
    void setModel(const std::string &newModel);
    std::string getBrand() const;
    void setBrand(const std::string &newBrand);

    Engine getEngine() const;
    void setEngine(int horsepower, double displacement);

    void printDetails();




    void setWheels(int size, const std::string& type);
};

#endif // CAR_H
