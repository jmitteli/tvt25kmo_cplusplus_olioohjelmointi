#include "henkilo.h"

int Henkilo::getAge() const
{
    return age;
}

void Henkilo::setAge(int newAge)
{
    age = newAge;
}

int Henkilo::getName() const
{
    return name;
}

void Henkilo::setName(int newName)
{
    name = newName;
}

void Henkilo::printData()
{
    cout<<"nimi= "<<name<<" ika= "<<age<<endl;
}

Henkilo::Henkilo(string name,int age) {

}
