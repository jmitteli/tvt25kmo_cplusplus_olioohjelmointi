#include "animal.h"
#include "bird.h"
#include "cat.h"
#include "dog.h"
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

int main()
{
    {
    unique_ptr<Animal> animal = make_unique<Animal>();
    animal->callOut();
    cout<<endl;
    unique_ptr<Animal> dog = make_unique<Dog>();
    dog->callOut();
    cout<<endl;
    unique_ptr<Animal> cat = make_unique<Cat>();
    cat->callOut();
    cout<<endl;
    unique_ptr<Animal> bird = make_unique<Bird>();
    bird->callOut();
    cout<<endl;

    }
    cout<<endl;
    {
    unique_ptr<Dog> dog = make_unique<Dog>();
    dog->callOut();
    cout<<endl;
    unique_ptr<Cat> cat = make_unique<Cat>();
    cat->callOut();
    cout<<endl;
    unique_ptr<Bird> bird = make_unique<Bird>();
    bird->callOut();
    cout<<endl;
    }

    cout<<endl;

    std::vector<std::unique_ptr<Animal>> animals;
    animals.push_back(std::make_unique<Dog>());
    animals.push_back(std::make_unique<Cat>());
    animals.push_back(std::make_unique<Bird>());

    for (const auto& animal : animals) {
        animal->callOut();
    }


    return 0;
}
