#include <iostream>
using namespace std;

#define PI 3.14159

int main() {
    // Parte 1: Variáveis, constantes e operações matemáticas

    // Calculadora básica
    int a, b;
    cout << "Digite dois números inteiros: ";
    cin >> a >> b;

    cout << "Soma: " << a + b << endl;
    cout << "Diferença: " << a - b << endl;
    cout << "Produto: " << a * b << endl;
    cout << "Quociente: " << a / b << endl;
    cout << "Resto da divisão: " << a % b << endl;

    // Constantes
    double r;
    cout << "Digite o raio do círculo: ";
    cin >> r;

    double area = PI * r * r;
    cout << "Área do círculo: " << area << endl;

    // Parte 2: Arrays unidimensionais

    // Média de notas
    float notas[5];
    float soma = 0;
    cout << "Digite as notas dos 5 alunos: ";
    for (int i = 0; i < 5; ++i) {
        cin >> notas[i];
        soma += notas[i];
    }
    float media = soma / 5;
    cout << "Média das notas: " << media << endl;

    float maior_nota = notas[0];
    float menor_nota = notas[0];
    for (int i = 1; i < 5; ++i) {
        if (notas[i] > maior_nota) {
            maior_nota = notas[i];
        }
        if (notas[i] < menor_nota) {
            menor_nota = notas[i];
        }
    }
    cout << "Maior nota: " << maior_nota << endl;
    cout << "Menor nota: " << menor_nota << endl;

    // Encontrar maior e menor elemento em um array de inteiros
    int numeros[10];
    cout << "Digite 10 números inteiros: ";
    for (int i = 0; i < 10; ++i) {
        cin >> numeros[i];
    }

    int maior_numero = numeros[0];
    int menor_numero = numeros[0];
    for (int i = 1; i < 10; ++i) {
        if (numeros[i] > maior_numero) {
            maior_numero = numeros[i];
        }
        if (numeros[i] < menor_numero) {
            menor_numero = numeros[i];
        }
    }
    cout << "Maior número: " << maior_numero << endl;
    cout << "Menor número: " << menor_numero << endl;

    // Parte 3: Ciclo for

    // Tabuada
    int n;
    cout << "Digite um número inteiro para calcular a tabuada: ";
    cin >> n;

    cout << "Tabuada de " << n << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}
