#ifndef ITALIANCHEFGRANDMOTHER_H
#define ITALIANCHEFGRANDMOTHER_H

#include "chef.h"
#include <iostream>
#include <string>

using namespace std;

class ItalianChefGM : public Chef
{
private:
    int vesi;
    int jauhot;

public:
    ItalianChefGM(string, int, int);
    ~ItalianChefGM();
    string getNameGM();
    void makePastaGM(int, int);
};

#endif //ITALIANCHEFGRANDMOTHER.H
