#include "ItalianChefGrandmother.h"
#include <iostream>
#include <string>

using namespace std;


ItalianChefGM::ItalianChefGM(string chefName, int vesi, int jauhot) : Chef(chefName), vesi(vesi), jauhot(jauhot)
{
    cout << "Chef " << name << " konstruktori" << endl;
}

ItalianChefGM::~ItalianChefGM()
{
    cout << "Chef " << name << " destruktori" << endl;
}

string ItalianChefGM::getNameGM()
{
    return name;
}

void ItalianChefGM::makePastaGM(int vesi, int jauhot)
{
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " uses jauhot = " << jauhot << endl;
    cout << "Chef " << name << " uses vesi = " << vesi << endl;

}
