#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(string name)
    : Chef(name)
{
        cout<<"ItalianChef "<<this->name<<" constructor"<<endl;
}

ItalianChef::~ItalianChef()
{
        cout<<"ItalianChef "<<name<<" destructor"<<endl;
}

string ItalianChef::getName() const
{
    return name;
}

void ItalianChef::makePasta() const
{
    cout<<"ItalianChef "<<name<<" makes pasta"<<endl;
}
