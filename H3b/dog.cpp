#include "dog.h"



Dog::Dog()
    : Animal()
{
    cout<<"Dog constructor"<<endl;
}

Dog::~Dog()
{
    cout<<"Object Dog destructor"<<endl;
}

void Dog::callOut()
{
    cout<<"Dog barks!"<<endl;
}
