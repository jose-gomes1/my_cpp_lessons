//declaração

#ifndef REFRIGERANTE_H
#define REFRIGERANTE_H
#endif

#include <iostream>
#include <time.h>

using namespace std;

class Refrigerante{
    private:
    bool aberta = false;
    string marca;
    string sabor;
    int acucar;
    int mli;
    int currentml;

    public:

    Refrigerante();

    Refrigerante(string marca, string sabor, int acucar, int mli, int currentml);

    ~Refrigerante(); //destructor

    void abrirLata();
    void beber();
    void verRotulo();
    void atirar();
    void executar(int op);
};