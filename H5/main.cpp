#include "classa1.h"
#include "classa2.h"
#include "classb.h"

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    //int *pointer = &a;

    cout<<"a:n arvo on: "<<a<<" ja osoite on: " << &a << endl;

    int *pointerA = &a;

    cout << "Pointterin osoittama osoite on: "<<pointerA<<endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: "<<*pointerA<<endl;

    int &refA = a;


    cout << "refA osoittama osoite on: "<<&refA<<endl;
    cout << "refA:n osoittaman muistipaikan arvo on: "<<refA<<endl;

    int b = 6;

    refA = b;

    pointerA = &b;

    cout<<endl;

    cout << "Muutosten jalkeen:"<<endl;
    cout << "a: " << a << " osoite: " << &a << endl;
    cout << "b: " << b << " osoite: " << &b << endl;
    cout << "pointerA osoittaa: " << pointerA << " arvo: " << *pointerA << endl;
    cout << "refA osoite: " << &refA << " arvo: " << refA << endl;

    //*****************************************************************************


    cout<<endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;

    cout<<endl;

    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;


    return 0;
}
