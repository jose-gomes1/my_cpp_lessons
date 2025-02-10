/**
 * @file treino.cpp
 * @author José Gomes
 * @date 10-02-2025
 * @brief Treino para o jogo de Ggambu para apresentar na aula de C++
 */

#include "treino.h"

/**
 * @brief Função booleana que retorna se um número é par
 */
bool par(int num)
{
    return num % 2 == 0;
}

/**
 * @brief O jogo, usando referências para a struct Ggambu, com condições e input do utilizador
 */
void rodada(Ggambu &J1, Ggambu &Bot)
{
    int aposta, palpite;
    cout << "Quantos berlindes queres apostar?\n";
    cin >> aposta;

    //Condição para evitar a aposta ser maior que o número de berlindes do jogador
    if(aposta > J1.numBer){
        cout << "Não tens berlindes suficientes\n";
        return;
    }

    cout << "Quantos berlindes tem o teu oponente? (0 - par, 1 - impar)\n";
    cin >> palpite;
    bool pares = par(aposta);
    int botPalp = rand()%2;

    //Condição para mostrar a opção de escolha do bot
    cout << "O teu oponente escolheu: " << (botPalp == 0 ? "par" : "impar") << endl;

    //Condição de vitória e derrota
    if(pares = botPalp){
        cout << "Ganhaste a aposta\n";
        cout << "Recebeste " << aposta << " berlindes\n";
        J1.numBer += aposta;
        Bot.numBer -= aposta;
    } else {
        cout << "Perdeste a aposta\n";
        cout << "Perdeste " << aposta << " berlindes\n";
        J1.numBer -= aposta;
        Bot.numBer += aposta;
    }

    //Resultados
    cout << J1.nome << " tem " << J1.numBer << " berlindes\n";
    cout << Bot.nome << " tem " << Bot.numBer << " berlindes\n";
}
