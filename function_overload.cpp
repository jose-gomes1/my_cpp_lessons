#include <iostream>
using namespace std;

int somaNumeros(int x, int y){
    return x+y;
}

double somaNumeros(double x, double y){
    return x+y;
}

int soma(int k){
    if (k>0){
        return k+ soma(k - 1);
    }else{
        return 0;
    }
}

int main(){
    cout << somaNumeros(2,6) << "/n";
    return 0;
}