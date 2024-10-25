#include "acoes.h"

void Acoes::acelerar(){
    for(velocidade; velocidade <= vel_max; velocidade++){
        cout << "Estás a " << velocidade << "km/h\n";
    }
}

void Acoes::travar(){
    for(velocidade; velocidade >= 0; velocidade--){
        cout << "Estás a " << velocidade << "km/h\n";
    }
}

void Acoes::executar(int op){
    switch(op){
        case 1:
        acelerar();
        case 2:
        travar();
    }
}