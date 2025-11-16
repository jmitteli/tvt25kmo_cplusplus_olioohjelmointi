#include "henkilo.h"

#include <iostream>

using namespace std;

int main()
{
    //Luodaan olio pinoon (stack)
    //ns. automaattinen olio
    //olio tuhoutuu automaattisesti

    Henkilo objHenkilo;
    objHenkilo.ika=27;
    objHenkilo.nimi="Teppo Teras";

    cout << objHenkilo.nimi << " on "<< objHenkilo.ika << " vuotias" << endl;

    //luodaan olio kekoon (heap)
    //meidän tulee tuhota olio, kun sitä ei enää tarvita
    Henkilo *objectHenkilo2;
    objectHenkilo2 = new Henkilo();
    objectHenkilo2->ika=28;
    objectHenkilo2->nimi="liisa jaakonsaari";

    cout << objectHenkilo2->nimi << " on "<< objectHenkilo2->ika << " vuotias" << endl;
    delete objectHenkilo2;
    objectHenkilo2 = nullptr;

    return 0;
}
