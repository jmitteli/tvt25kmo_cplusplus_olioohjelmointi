#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>
#include <limits>
using namespace std;

int main()
{
    cout<<"Welcome to excercise H2a"<<endl;
    //Car class
    string userBrand;
    string userModel;
    int userYear;

    cout<<"Give manufacturer"<<endl;
    cin>>userBrand;

    cout<<"Give Model"<<endl;
    cin>>userModel;

    cout<<"Give year of the model"<<endl;
    cin>>userYear;

    Car car;
    car.setBrand(userBrand);
    car.setModel(userModel);
    car.setYearModel(userYear);

    car.printData();

    //Rectangle class
    double userWidth;
    double userHeight;
    Rectangle *objectRectangle1=new Rectangle();

    cout<<"Give Width of the rectangle"<<endl;
    cin>>userWidth;

    cout<<"Give height of the rectangle"<<endl;
    cin>>userHeight;

    objectRectangle1->setWidth(userWidth);//Sets object width
    objectRectangle1->setHeight(userHeight);//Sets object height

    cout<<"Area of the rectangle is: "<<objectRectangle1->getArea()<<endl;
    cout<<"Circum of the rectangle is: "<<objectRectangle1->getCircum()<<endl;

    delete objectRectangle1;
    objectRectangle1=nullptr;

    //Class student
    string userName;
    int userStudentNumber;
    float userAverage;
    cout<<"Enter Students name"<<endl;
    getline(cin >> ws, userName);


    cout<<"Enter Student number"<<endl;
    cin>>userStudentNumber;

    cout<<"Enter Student's average"<<endl;
    cin>>userAverage;

    unique_ptr<Student> objectStudent1 = make_unique<Student>();//Create object
    objectStudent1->setName(userName);
    objectStudent1->setStudentNumber(userStudentNumber);
    objectStudent1->setAverage(userAverage);

    cout<<"Student information:"<<endl;
    cout<<"Student Name: "<<objectStudent1->getName()<<endl;
    cout<<"Student Studentnumber: "<<objectStudent1->getStudentNumber()<<endl;
    cout<<"Student Average: "<<objectStudent1->getAverage()<<endl;
    return 0;
}
