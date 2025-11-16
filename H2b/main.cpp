#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout<<"Welcome to excercise H2b"<<endl;
    cout<<"Object list using Vector"<<endl;

    vector<Car> carList;
    carList.emplace_back("Toyota", "Camry", 1985);
    carList.emplace_back("Audi", "Quattro", 1990);
    carList.emplace_back("Nissan", "Sunny", 1999);

    cout<<"Print out the second car in the list"<<endl;
    carList[1].printData();

    cout<<"Printing out all objects information"<<endl;
    for(int x=0; x<=2; x++){
        cout<<"-";
        carList[x].printData();
    }

    return 0;
}
