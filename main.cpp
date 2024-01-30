#include "chef.h"
#include "italianchef.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
    Chef chef1("Gordon");

    chef1.makeSalad();
    chef1.makeSoup();

    ItalianChef chef2("Anthony");

    chef2.makeSalad();
    chef2.makeSoup();
    chef2.makePasta();


    return 0;
}
