#include "animal.h"

Animal::Animal() {
    cout<<"Animal class object constructor"<<endl;
}

Animal::~Animal()
{
    cout<<"Animal class object destructor"<<endl;
}

void Animal::callOut()
{
    cout<<"Animal is making noises!"<<endl;
}
