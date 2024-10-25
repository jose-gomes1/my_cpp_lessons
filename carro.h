#ifndef CARRO_H
#define CARRO_H
#endif

#include "acoes.h"

class Carro : public Acoes{
    private:
    string marca;
    string modelo;

    public:
    Carro(string marca, string modelo, int velocidade, int vel_max);
};