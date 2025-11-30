#include "engine.h"

Engine::Engine() {}

Engine::Engine(int horsepower, double displacement)
{

}

Engine::~Engine()
{

}

double Engine::getDisplacement() const
{
    return displacement;
}

void Engine::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}



int Engine::getHorsepower() const
{
    return horsepower;
}

void Engine::setHorsepower(int newHorsepower)
{
    horsepower = newHorsepower;
}
