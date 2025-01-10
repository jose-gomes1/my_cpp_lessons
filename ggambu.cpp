#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Ggambu{
    string nome;
    int numBer;
};

bool par(int num){
    return num % 2 == 0;
}

void jogarRodada(Ggambu& ativo,Ggambu& bot){
    int aposta;
    cout << ativo.nome << ", quantos berlindes deseja esconder?\n";
    cin >> aposta;
    if(aposta > ativo.numBer){
        cout << "Não tens berlindes suficientes\n";
        return;
    }
    cout << "A quantidade de berlindes do oponente é par ou impar? (0 - par, 1 - impar)\n";
    int palpite;
    cin >> palpite;
    bool pares = par(aposta);

    int botPalpite = random()%2;

    if(pares == botPalpite){
        cout << "Acertou! Ganhou " << aposta << " berlindes\n";
        ativo.numBer += aposta;
        bot.numBer -= aposta;
    }else{
        cout << "Não acertou! Perdeu " << aposta << " berlindes\n";
        bot.numBer += aposta;
        ativo.numBer -= aposta;
    }
    cout << ativo.nome << " tem " << ativo.numBer << " berlindes\n";
    cout << bot.nome << " tem " << bot.numBer << " berlindes\n\n";
    
    if (ativo.numBer >= 20, bot.numBer <= 0) {
        cout << ativo.nome << " venceu com " << ativo.numBer << " belindes!\n";
        return;
    } else if(bot.numBer >= 20, ativo.numBer <= 0){
        cout << bot.nome << " venceu com " << bot.numBer << " berlindes!\n";
        return;
    }
}

int main(){
    srand(time(0));

    Ggambu J1 = {"Jogador 1", 10};
    Ggambu J2 = {"Jogador 2", 10};
    cout << "Bem-vindo ao Ggambu! Cada jogador começa com 10 berlindes\n";
    while(J1.numBer && J2.numBer > 0){
        cout << "\n--- Começo do Jogo ---\n";
        jogarRodada(J1, J2);
    }
    cout << "\n--- Fim do Jogo ---\n";

    return 0;
}