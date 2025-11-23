#ifndef BIRD_H
#define BIRD_H

#include "animal.h"

using namespace std;

class Bird : public Animal
{
public:
    Bird();
    ~Bird();
    virtual void callOut()override;
};

#endif // BIRD_H
