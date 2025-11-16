#include "car.h"

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

Car::Car() {}

Car::Car(string brand, string model, int yearModel)
{
    this->brand=brand;
    this->model=model;
    this->setYearModel(yearModel);
}

void Car::printData(){
    cout<<"Car information:"<<endl;
    cout<<"Make:"<<this->brand<<endl;
    cout<<"Model: "<<this->model<<endl;
    cout<<"Year: "<<this->yearModel<<endl;
    cout<<"*********************"<<endl;
}

Car::~Car()
{
    cout<<"Car object was destroyed!"<<endl;
}
