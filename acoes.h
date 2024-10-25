#ifndef ACOES_H
#define ACOES_H
#endif

#include <iostream>

using namespace std;

class Acoes{
    public:
    void acelerar();
    void travar();
    int velocidade;
    int vel_max;
    void executar(int op);
};