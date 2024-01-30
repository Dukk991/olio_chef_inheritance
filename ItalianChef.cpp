#include "italianchef.h"
#include <iostream>
#include <string>

using namespace std;


ItalianChef::ItalianChef(string chefName) : Chef(chefName)
{
    cout << "Italian chef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Italian chef " << name << " destruktori" << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Italian chef " << name << " makes pasta" << endl;
}
