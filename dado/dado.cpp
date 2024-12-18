#include "dado.h"

Dado::Dado()
{
    this -> lanc = 0;
}

void Dado::lancar_dado()
{
    srand(time(NULL));
    int numero = rand() % 6 +1;
    switch(numero){
        case 1:
        cout << endl;
        cout << "    *\n";
        cout << endl;
        break;
        case 2:
        cout << "       *\n";
        cout << endl;
        cout << "*   \n";
        break;
        case 3:
        cout << "       *\n";
        cout << "    *\n";
        cout << "*   \n";
        break;
        case 4:
        cout << "*      *\n";
        cout << endl;
        cout << "*      *\n";
        break;
        case 5:
        cout << "*      *\n";
        cout << "    *\n";
        cout << "*      *\n";
        break;
        case 6:
        cout << "*      *\n";
        cout << "*      *\n";
        cout << "*      *\n";
        break;
    }
    cout << "========\n";
}

void Dado::menu()
{
    cout << "       Dado Eletrónico - No âmbito do módulo\n Programação c/c++ Estruturas básicas e Conceitos Fundamentais\n                  ENTA - 2024\n";
    int opcao;
    cout << "===============\n";
    cout << "Lançamento numero: " << lanc+1 << endl;
    cout << "===============\n";
    cout << "1. Lançar dado\n2. Sair\n";
    cout << "===============\n";
    cin >> opcao;
    system("clear");
    cout << "========\n";
    switch(opcao){
        case 1:
        lanc++;
        lancar_dado();
        menu();
        default:
        break;
}
}
