#include <iostream>
using namespace std;

class Carro{
    public:
        int anos;
        string marca;

        //métodos são funções dentro de classes
        void setVelocidade(int v){
            velocidade = v;
        }
    private:
        int velocidade;
};

int main(){
    Carro carro1;
    carro1.anos = 85;
    carro1.marca = "Sim";
    carro1.setVelocidade(100);
    return 0;
}