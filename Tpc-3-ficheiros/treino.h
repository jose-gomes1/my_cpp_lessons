/**
 * @file treino.h
 * @author José Gomes
 * @date 10-02-2025
 * @brief Treino para o jogo de Ggambu para apresentar na aula de C++
 */

#ifndef TREINO_H
#define TREINO_H

//Inclusão das bibliotecas
#include <iostream>
using namespace std;

//Declaração da struct Ggambu
struct Ggambu{
    string nome;
    int numBer;
};

    bool par(int num);
    void rodada(Ggambu& J1, Ggambu& Bot);
    
#endif
