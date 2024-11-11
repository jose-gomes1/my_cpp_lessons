#include <iostream>
#include <fstream>

using namespace std;

//Abrir ficheiro que não existe

int main(){
    string nome;
    cin >> nome;

    try{
        ifstream file(nome);
        if(!file.is_open()){
            throw "O ficheiro não existe!";
        }
        throw "O ficheiro foi aberto com sucesso";
        }
        catch(const char* e){
            cout << e << endl;
    }
    return 0;
}