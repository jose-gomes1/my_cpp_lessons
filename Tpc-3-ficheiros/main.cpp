/**
 * @file main.cpp
 * @author José Gomes
 * @date 10-02-2025
 * @brief Treino para o jogo de Ggambu para apresentar na aula de C++
 */

#include "treino.h"

//Função main com a declaração das struct Ggambu J1 e Bot, um ciclo while para a inicialização do jogo e as condições de finalização do mesmo
int main(){
    srand(time(0));
    Ggambu J1 = {"Jogador 1", 10};
    Ggambu Bot = {"Jogador 2 (Bot)", 10};
    cout << "Bem-vindo ao Ggambu\nCada jogador começará com 10 berlindes\n";
    while(J1.numBer > 0 && Bot.numBer > 0){
        J1.rodada(J1, Bot);
    }

    cout << "O jogo acabou\n";

    if(J1.numBer >= 20){
        cout << J1.nome << " venceu o jogo com " << J1.numBer << " berlindes\n";
    }
    else if(Bot.numBer >= 20){
        cout << Bot.nome << " venceu o jogo com " << Bot.numBer << " berlindes\n";
    }
    return 0;
}