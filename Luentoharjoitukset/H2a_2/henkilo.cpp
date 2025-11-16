#include "henkilo.h"

int Henkilo::getIka() const
{
    return ika;
}

void Henkilo::setIka(int newIka)
{
    ika = newIka;
}

string Henkilo::getName() const
{
    return name;
}

void Henkilo::setName(const string &newName)
{
    name = newName;
}

void Henkilo::tulostaTiedot()
{
    cout<<"Nimi = "<<name<<" ika = "<< ika <<endl;
}

Henkilo::Henkilo() {}
