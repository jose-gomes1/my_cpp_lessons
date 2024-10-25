#include "carro.h"

int main(){
    Carro c("Fiat", "Uno", 300, 600);
    int opcao;
    cin >> opcao;
    switch(opcao){
        case 1:
        c.executar(1);
        case 2:
        c.executar(2);
    }
    return 0;
}