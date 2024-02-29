#include <iostream>
#include <unistd.h>
using namespace std;

#define PI 3.14159

void calculadora(){
    int a, b;
    cout << "Digite dois números inteiros: ";
    cin >> a >> b;

    cout << "Soma: " << a + b << endl;
    cout << "Diferença: " << a - b << endl;
    cout << "Produto: " << a * b << endl;
    cout << "Quociente: " << a / b << endl;
    cout << "Resto da divisão: " << a % b << endl;

    double r;
    cout << "Digite o raio do círculo: ";
    cin >> r;

    double area = PI * r * r;
    cout << "Área do círculo: " << area << endl;
}

void array(){
    float notas[5];
    cout << "Digite as notas dos 5 alunos: ";
    for (int i = 0; i < 5; i++) {
            cin >> notas[i];
    }

    float media = 0;
    for (int i = 0; i < 5; i++) {
        media += notas[i];
    }
    media /= 5;

    cout << "Média das notas: " << media << endl;

    float maior_nota = notas[0];
    float menor_nota = notas[0];
    for (int i = 1; i < 5; i++) {
        if (notas[i] > maior_nota) {
            maior_nota = notas[i];
        }
        if (notas[i] < menor_nota) {
            menor_nota = notas[i];
        }
    }
    cout << "Maior nota: " << maior_nota << endl;
    cout << "Menor nota: " << menor_nota << endl;

    int numeros[10];
    cout << "Digite 10 números inteiros: ";
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    int maior_numero = numeros[0];
    int menor_numero = numeros[0];
    for (int i = 1; i < 10; i++) {
        if (numeros[i] > maior_numero) {
            maior_numero = numeros[i];
        }
        if (numeros[i] < menor_numero) {
            menor_numero = numeros[i];
        }
    }
    cout << "Maior número: " << maior_numero << endl;
    cout << "Menor número: " << menor_numero << endl;
}

void cicloFor(){
    int n;
    cout << "Digite um número inteiro para calcular a tabuada: ";
    cin >> n;

    cout << "Tabuada de " << n << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

void menu(){
    cout << "=====================\n";
    cout << "        MENU\n";
    cout << "=====================\n";
    cout << "1. Caluladora\n";
    cout << "2. Notas\n";
    cout << "3. Ciclo For\n";
    cout << "4. Sair\n";
}

int getOpcao(){
    int opcao;
    cout << "Qual opção queres escolher? ";
    cin >> opcao;
    return opcao;
}

void choose(int opcao){
    switch (opcao){
    case 1:
        calculadora();
        break;
    case 2:
        array();
        break;
    case 3:
        cicloFor();
        break;
    case 4:
        exit(0);
        break;
    default:
        cout << "Não é uma opção\n";
        break;
    }
}

int main(){
    int opcao;
    menu();
    opcao = getOpcao();
    system("clear");
    choose(opcao);
    sleep(4);
    system("clear");
    return main();
}