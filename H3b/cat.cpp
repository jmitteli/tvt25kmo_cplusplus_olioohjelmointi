#include "cat.h"

Cat::Cat()
    : Animal()
{
        cout<<"Cat constructor"<<endl;
}

Cat::~Cat()
{
    cout<<"Object Cat destructor"<<endl;
}

void Cat::callOut()
{
    cout<<"Cat MEWS!"<<endl;
}
