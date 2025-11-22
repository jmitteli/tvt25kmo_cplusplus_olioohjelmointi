#ifndef CHEF_H
#define CHEF_H

#include <iostream>
using namespace std;

class Chef
{
protected:
    string name;
public:
    Chef(string);
    ~Chef();
    void makeSalad() const;
    void makeSoup() const;
};

#endif // CHEF_H
