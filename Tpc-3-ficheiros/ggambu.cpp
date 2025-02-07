#include <iostream>
#include <random>
#include <ctime>

using namespace std;

struct Ggambu{
    string nome;
    int numBer;
};

bool par(int num){
    return num % 2 == 0;
}

void jogarRodada(Ggambu& ativo, Ggambu& bot){
    int aposta;
    cout << ativo.nome << ", quantos berlindes deseja esconder?\n";
    cin >> aposta;
    if(aposta > ativo.numBer){
        cout << "Não tem berlindes suficientes\n";
        return;
    }
    cout << "A quantidade de berlindes do oponente é par ou impar? (0 - par, 1 - impar)\n";
    int palpite;
    cin >> palpite;
    bool pares = par(aposta);

    int botPalpite = rand()%2;
    
    cout << "Bot escolheu: " << (botPalpite == 0 ? "par" : "impar") << endl;

    if (pares = botPalpite) {
        cout << "Acertou! Ganhou " << aposta << " berlindes\n";
        ativo.numBer += aposta;
        bot.numBer -= aposta;
    } else {
        cout << "Não acertou! Perdeu " << aposta << " berlindes\n";
        bot.numBer += aposta;
        ativo.numBer -= aposta; 
    }

    cout << ativo.nome << " tem " << ativo.numBer << " berlindes\n";
    cout << bot.nome << " tem " << bot.numBer << " berlindes\n";
}

int main(){
    srand(time(0));

    Ggambu J1 = {"Jogador 1", 10};
    Ggambu J2 = {"Jogador 2", 10};
    cout << "\nBem-vindo ao Ggambu! Cada jogador começa com 10 berlindes\n";
    while(J1.numBer > 0 && J2.numBer > 0){
        cout << "\n--- Começo do Jogo ---\n";
        jogarRodada(J1, J2);
    }

    cout << "\n--- Fim do Jogo ---\n";
    if (J1.numBer >= 20){
        cout << J1.nome << " venceu com " << J1.numBer << " berlindes!\n";
    } else if(J2.numBer >= 20){
        cout << J2.nome << " venceu com " << J2.numBer << " berlindes!\n";
    }

    return 0;
}