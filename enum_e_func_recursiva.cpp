#include <iostream>

using namespace std;

enum Cores{
    VERMELHO,
    VERDE,
    AZUL
};

Cores cor1 = VERMELHO;
Cores cor2 = VERDE;
Cores cor3 = AZUL;

int sum(int k){ //função recursiva
    if(k>0){
    return k + sum(k-1);
} else {
    return 0;
}
}

int main(){
    int result = sum(10);
    cout << result << endl;
    return 0;
}