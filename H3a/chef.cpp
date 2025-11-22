#include "chef.h"


using namespace std;

Chef::Chef(string name) {
    this->name=name;
    cout<<"Chef "<<name<<" constructor"<<endl;
}

Chef::~Chef()
{
    cout<<"Chef "<<name<<" destructor"<<endl;
}

void Chef::makeSalad()const
{
    cout<<"Chef "<<name<<" makes salad"<<endl;
}

void Chef::makeSoup()const
{
    cout<<"Chef "<<name<<" makes soup"<<endl;
}
