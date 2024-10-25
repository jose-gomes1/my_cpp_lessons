#include "refrigerante.h"

int main(){
    Refrigerante Fanta1("Fanta", "Ananás", 0, 330, 330);
    int opcao;

do{
    cout << "1. Abrir Lata\n";
    cout << "2. Beber refrigerante\n";
    cout << "3. Ver rótulo\n";
    cout << "4. Atirar garrafa\n";
    cout << "Escolhe uma opção: ";
    cin >> opcao;

    switch(opcao){
        case 1:
        Fanta1.executar(1);
        break;
        case 2:
        Fanta1.executar(2);
        break;
        case 3:
        Fanta1.executar(3);
        break;
        break;
        case 4:
        Fanta1.executar(4);
        break;
    }
}while (opcao != 4);

return 0;
}