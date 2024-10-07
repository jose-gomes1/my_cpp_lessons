//classe Carro
#include <iostream>

using namespace std;

class Fatura{ //instancia de classe
    private:
        string numero;
        string nome;
        string contribuinte;
        float valor;
        int sh;

    public:
        Fatura(int sh){ //construtor
            cout << "Construtor chamado\n"; //executa sempre que instanceada a classe
            this->sh = sh;
            cout << "0 ash " << this->sh << endl;
        }

        void criarFatura(string numero, string nome, string contribuinte, float valor){
            this -> numero = numero;
            this -> nome = nome;
            this -> contribuinte = contribuinte;
            this -> valor = valor;
        }
        
        void imprimir(){
            cout << "Fatura:" << endl;
            cout << "Numero: " << numero << endl;
            cout << "Nome: " << nome << endl;
            cout << "Contribuinte: " << contribuinte << endl;
            cout << "Valor: " << valor << endl;
        }
};

int main(){
    system("clear");

    Fatura fatura1(235), fatura2(236);

    fatura1.criarFatura("A", "B", "C", 5);
    fatura1.imprimir();
    cout << endl;
    fatura2.criarFatura("D", "E", "F", 10);
    fatura2.imprimir();
    return 0;
}