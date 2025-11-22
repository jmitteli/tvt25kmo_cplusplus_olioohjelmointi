#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    {
    Chef gordon("Gordon Ramsay");
    gordon.makeSalad();
    gordon.makeSoup();
    }

    cout<<endl;

    {
    ItalianChef anthony("Anthony Bourdain");
    anthony.makeSalad();
    anthony.makeSoup();
    anthony.makePasta();
    cout<<"name of the Italian Chef is "<<anthony.getName()<<endl;
    }

    return 0;
}
