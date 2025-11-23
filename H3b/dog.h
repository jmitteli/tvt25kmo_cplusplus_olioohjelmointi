#ifndef DOG_H
#define DOG_H

#include "animal.h"

using namespace std;

class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    virtual void callOut() override;
};

#endif // DOG_H
