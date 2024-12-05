#include <iostream>

using namespace std;

string name = "Paulo";
int number = 123;
float numberfloat = 3.14;
auto naoSei = "Não sei"; //apenas para variáveis sem certeza
unsigned int altura = 10; //não pode ser negativo

void testes(){
    int a;
    a = 'A'; //não dá com "", pois assume como string

    cout << a << endl; //valor ASCII de 'A'
    cout << "Escape\\Characters\n";

    char lower = 'd';
    char upper = lower - 32;
    cout << upper << endl;

}

void maiusculas(){
    char letra;
    cout << "Insira uma letra minúscula: ";
    cin >> letra;
    cout << "A letra " << letra << " em maiúsculas é: " << (char)(letra - 32) << endl;
}

int main(){
    maiusculas();
    return 0;
}