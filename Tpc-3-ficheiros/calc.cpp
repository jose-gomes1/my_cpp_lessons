#include <iostream>

using namespace std;

struct Forma{
    double base, altura, raio;
    const double PI = 3.1415;
}; 

double triangulo(Forma &forma) {
    cout << "Qual é a base?\n";
    cin >> forma.base;
    cout << "E a altura?\n";
    cin >> forma.altura;
    double result = (forma.base * forma.altura) / 2;
    cout << "A Área do Triangulo é: " << result << endl;
    return result;
}

double quadrado(Forma &forma) {
    cout << "Qual é o tamanho do lado??\n";
    cin >> forma.base;
    double resultArea = forma.base * forma.base;
    double resultPerimetro = forma.base * 4;
    cout << "A Área do Quadrado é: " << resultArea << endl;
    cout << "O Perímetro do Quadrado é: " << resultPerimetro << endl;
    return resultArea;
}

double retangulo(Forma &forma) {
    cout << "Qual é a base?\n";
    cin >> forma.base;
    cout << "E a altura?\n";
    cin >> forma.altura;
    double resultArea = forma.base * forma.altura;
    double resultPerimetro = (forma.base + forma.altura) * 2;
    cout << "A Área do Retangulo é: " << resultArea << endl;
    cout << "O Perímetro do Retangulo é: " << resultPerimetro << endl;
    return resultArea;
}

double circulo(Forma &forma) {
    cout << "Qual é o raio?\n";
    cin >> forma.raio;
    double resultArea = forma.PI * (forma.raio * forma.raio);
    double resultPerimetro = 2 * forma.PI * forma.raio;
    cout << "A Área do Circulo é: " << resultArea << endl;
    cout << "O Perímetro do Circulo é: " << resultPerimetro << endl;
    return resultArea;
}



void menu() {
    Forma forma;
    int opcao;
    do{
    cout << "Calcular:\n";
    cout << "1. Triangulo\n2. Quadrado\n3. Retangulo\n4. Circulo\n0. Sair\n";
    cout << "Escolha uma opção: ";
    cin >> opcao;

    switch (opcao) {
        case 1: {
            triangulo(forma);
            break;
        }
        case 2:
            quadrado(forma);
            break;
        case 3:
            retangulo(forma);
            break;
        case 4:
            circulo(forma);
            break;
        case 0:
            cout << "Saindo do programa..." << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
        }
    }while (opcao != 0);
}

int main() {
    menu();
    return 0;
}