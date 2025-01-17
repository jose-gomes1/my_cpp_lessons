#include <iostream>
#include <random>
#include <ctime>
using namespace std;

struct Ggambu{
    string nome;
    int numeroDeBerlindes;
};

bool pares(int num){
    return num % 2;
}

void jogo(Ggambu &player, Ggambu &bot){
    int num;
    cout << "Quantos berlindes queres esconder? ";
    cin >> num;
    if(num > player.numeroDeBerlindes){
        cout << "Tens menos berlindes do que tentaste apostar\n";
        return;
    }
    cout << "O teu adversário está a esconder um numero de berlindes par ou impar?\n(0 - par, 1- impar)\n";
    int palpite;
    cin >> palpite;
    bool par = pares(num);

    int botPalpite = rand()%2+1;

    cout << "O bot escolheu: " << (botPalpite == 0 ? "par" : "impar") << endl;

    if(par == botPalpite){
        cout << "Acertaste\n";
        player.numeroDeBerlindes += num;
        bot.numeroDeBerlindes -= num;
    }else{
        cout << "Erraste\n";
        player.numeroDeBerlindes -= num;
        bot.numeroDeBerlindes += num;
    }
    cout << player.nome << " tem " << player.numeroDeBerlindes << " berlindes\n";
    cout << bot.nome << " tem " << bot.numeroDeBerlindes << " berlindes\n";
}

int main(){
    Ggambu J1 = {"Jogador 1", 10};
    Ggambu J2 = {"Jogador 2", 10};
    srand(time(0));

    cout << "Vamos começar o jogo, cada jogador irá começar com 10 berlindes\n";
    while(J1.numeroDeBerlindes > 0 && J2.numeroDeBerlindes > 0){
        cout << "- - - A começar o jogo - - -" << endl;
        jogo(J1, J2);
    }
       cout << "- - - O jogo terminou - - -\n";
    if(J1.numeroDeBerlindes >= 20){
        cout << J1.nome << " venceu o jogo com " << J1.numeroDeBerlindes << " berlindes\n";
        cout << J2.nome << " eliminado\n";
    }else if(J2.numeroDeBerlindes >= 20){
        cout << J2.nome << " venceu o jogo com " << J2.numeroDeBerlindes << " berlindes\n";
        cout << J1.nome << " eliminado\n";
    }
    return 0;
}