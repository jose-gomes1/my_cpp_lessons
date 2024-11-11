#include <iostream>
#include <fstream>

using namespace std;

//Abrir ficheiro que não existe

int main(){

while(true){
    try{
    string nome;
    cout << "Qual é o nome do ficheiro?\n";
    cin >> nome;
        ifstream file(nome);
        if(!file.is_open()){
            throw "E";
        }
        throw "O";
        }
        catch(const char *e){
            if(e[0] == 'E'){
                cout << "Erro ao abrir o ficheiro" << endl;
            }else{
                cout << "Ficheiro aberto com sucesso" << endl;
                break;
            }
}
}
    cout << "Fim do programa\n";
    return 0;
}