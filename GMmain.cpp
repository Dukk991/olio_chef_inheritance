#include "chef.h"
#include "italianchef.h"
#include "ItalianChefGrandmother.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ItalianChefGM chef3("Grandmother", 100, 250);

    chef3.makePastaGM(250, 100);

    return 0;
}
