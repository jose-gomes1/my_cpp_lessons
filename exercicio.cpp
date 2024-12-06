#include <iostream>
#include <iomanip>
using namespace std;

int input;
int sum(int n){
    int s = 0;
    while(n > 0){
        s++;
        n--;
    }
    return s;
}

int sum2(){
    int s = 0;
    while(input > 0){
        s++;
        input--;
    }
    return s;
}

int sum3(){
    int s = 0;
    for(int i = input; i > 0; i++) s++;
    return s;
}

void graficoHorizontal(int x, int y, int z){

    //encontra o maior valor entre x,y e z
    int maior = x;
    if(y > maior) maior = y;
    if(z > maior) maior = z;

    //valores reais
    int a,b,c;
    a = x;
    b = y;
    c = z;

    //normaliza os valores
    x = x * 50 / maior;
    y = y * 50 / maior;
    z = z * 50 / maior;

    //imprime o gráfico horizontal 

    cout << "x: " << setw(2) << x << " ";
    for(int i=0; i<x; i++) cout << "*";
    cout << endl;

    cout << "y: " << setw(2) << y << " ";
    for(int i=0; i<y; i++) cout << "*";
    cout << endl;

    cout << "z: " << setw(2) << z << " ";
    for(int i=0; i<z; i++) cout << "*";
    cout << endl;
    

    cout << endl;
}


int main(){
    graficoHorizontal(200,100,500);
    // input = 5;
    // cout << sum(input) << endl;
    // cout << sum2() << endl;
    // cout << sum3() << endl;
}