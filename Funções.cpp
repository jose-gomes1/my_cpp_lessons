#include <iostream>
using namespace std;

int myArray[] = { 1, 2, 3, 4, 5 };

string letras[2][4];

string letras2[2][4] = {
    {"A", "B", "C", "D"},
    {"E", "F", "G", "H"}
};

struct pessoa
{
    string nome;
    int idade;
    string CodPostal;
    string rua;
    string pais;
    string cidade;
};

int f(int x){
    return x*x;
};

void ola(){
    cout << "Olá!" << endl;
};

void msgError(string msd){
    cout << "--------------------" << endl;
    cout << "Error: " << msd << endl;
    cout << "--------------------" << endl;
}


void texto(string txt1, string txt2, string txt3){
    cout << txt1 << endl;
    cout << txt2 << endl;
    cout << txt3 << endl;
};

int multiplicacao(int x, int y=2){
    return x*y;
};

int main(){
    // cout << f(5) << endl;
    // cout << f(10) << endl;
    // ola();

    // msgError("Erro de conexão");

    // msgError("Erro de leitura");
    // texto("Olár", "Muindo", "!");
    // cout << multiplicacao(x=2, b=4) << endl;

    //uma função em C++ é uma instrução identificada com um determinado nome que pode ou não retornar um valor e pode ou não aceitar parâmetros dentro dos parênteses
};

// int main(){

//     pessoa p1, p2;

//     p1.nome = "João";
//     p2.nome = "Maria";

//     cout << p1.nome << endl;
//     cout << p2.nome << endl;

// }


//   int main1(){
    
//    for(int i = 0; i < 2; i++){
//        for (int j = 0; j < 4; j++){
//        cout << letras2[i][j] << endl;
//        }
//    }

//     cout << letras2[1][2] << endl;
//     cout << myArray[4] << endl;
//     cout << sizeof(myArray)/4 << endl;
//    return 0;
// }codeLLD


