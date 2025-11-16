#ifndef HENKILO_H
#define HENKILO_H
#include <iostream>

using namespace std;

class Henkilo
{
private:
    int ika;
    string name;
public:
    Henkilo();
    int getIka() const;
    void setIka(int newIka);
    string getName() const;
    void setName(const string &newName);
    void tulostaTiedot();
};

#endif // HENKILO_H
