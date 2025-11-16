#include "student.h"

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

int Student::getStudentNumber() const
{
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

float Student::getAverage() const
{
    return average;
}

void Student::setAverage(float newAverage)
{
    average = newAverage;
}



Student::Student(string name, int studentNumber, float average)
{
    this->name=name;
    this->studentNumber=studentNumber;
    this->average=average;
}

Student::Student() {}

Student::~Student()
{
    cout<<"Object Student was destroyed!"<<endl;
}
