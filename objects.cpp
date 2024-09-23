#include <iostream>
using namespace std;

//métodos são funções dentro de classes
class Carro{
    public:
        int anos;
        string marca;
    private:
        int velocidade;
};

int main(){
    Carro carro1;
    carro1.anos = 85;
    carro1.marca = "Sim";
    return 0;
}