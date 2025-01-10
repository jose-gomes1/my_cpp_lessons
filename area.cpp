#include <iostream>

using namespace std;

struct Vars{
    double base, altura, baseMaior, raio;
    const double PI = 3.1415;
};

float triangulo(Vars &forma){
    cout << "Qual é a base?\n";
    cin >> forma.base;
    cout << "E a altura?\n";
    cin >> forma.altura;
    int result = (forma.base * forma.altura)/2;
    return result;
}

float triangulo(Vars &forma){
    cout << "Qual é o lado?\n";
    cin >> forma.base;
    int result = (forma.base * forma.base);
    return result;
}

void menu(){
    Vars tri, qua, ret, trap, cir;
    cout << "Calcular:\n";
    cout << "1. Triangulo\n2. Quadrado\n3. Retangulo\n4. Trapezio\n5. Circulo\n";
    int opcao;
    cin >> opcao;
    switch(opcao){
        case 1:
        float areaTri = triangulo(tri);
        cout << "A área do Triangulo é " << areaTri << endl;
        break;
        case 2:
        float areaTri = triangulo(tri);
        cout << "A área do Triangulo é " << areaTri << endl;
        break;
        // case 3:

        // break;
        // case 4:

        // break;
        // case 5:

        // break;
    }
}

int main(){
    menu();
}