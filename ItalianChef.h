#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <iostream>
#include <string>

using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef(string chefName);
    ~ItalianChef();
    string getName();
    void makePasta();
};

#endif //ITALIANCHEF.H
