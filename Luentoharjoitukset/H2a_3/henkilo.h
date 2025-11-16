#ifndef HENKILO_H
#define HENKILO_H
#include<iostream>

using namespace std;

class Henkilo
{
private:
    int age;
    int name;
public:
    Henkilo(string name,int age);
    int getAge() const;
    void setAge(int newAge);
    int getName() const;
    void setName(int newName);
    void printData();
};

#endif // HENKILO_H
