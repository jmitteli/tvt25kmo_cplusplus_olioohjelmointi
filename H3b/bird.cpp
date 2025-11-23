#include "bird.h"

Bird::Bird()
    :Animal()
{
        cout<<"Bird constructor"<<endl;
}

Bird::~Bird()
{
    cout<<"Object Bird destructor"<<endl;
}

void Bird::callOut()
{
    cout<<"Bird Chirps!"<<endl;
}
