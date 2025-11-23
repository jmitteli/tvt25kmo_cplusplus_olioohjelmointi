#ifndef CAT_H
#define CAT_H

#include "animal.h"

using namespace std;

class Cat : public Animal
{
public:
    Cat();
    ~Cat();
    virtual void callOut()override;
};

#endif // CAT_H
