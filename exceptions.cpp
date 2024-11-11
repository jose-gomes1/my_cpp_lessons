#include <iostream>
using namespace std;
//Tratamento de Erros

int main(){
    int x = 0;
    int y = 0;
    int z = 0;
    cin >> x;
    cin >> y;

    try{
        if(y==0){
            throw "Divisao por zero";
        }
        z = x/y;
    }catch(const char* msg){
        cout << "Erro: " << msg << endl;
    }
    cout << x << "/" << y << "=" << z;
    }
