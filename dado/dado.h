#ifndef DADO_H
#define DADO_H

#include <iostream>
using namespace std;

class Dado{
    private:
    int lanc = 0;
    public:
    Dado();
    void lancar_dado();
    void menu();
};

#endif