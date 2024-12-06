#include <iostream>
#include <iomanip>
using namespace std;

int input;
unsigned int x;
unsigned int y;
unsigned int z;

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
    system("clear");
    if(x <= 40 && y <= 40 && z <= 40){
    cout << "X - " << x << " - ";
    for(int a = 1; a <= x; a++){
        cout << "|" << setw(2);
    }
    cout << endl;
    cout << "Y - " << y << " - ";
    for(int b = 1; b <= y; b++){
        cout << "|" << setw(2);
    }
    cout << endl;
    cout << "Z - " << z << " - ";
    for(int c = 1; c <= z; c++){
        cout << "|" << setw(2);
    }
    cout << endl;
    }
    else{
        cout << "ERRO: Valores muito grandes\n";
    }
}

int main(){
    graficoHorizontal(1,3,5);
    // input = 5;
    // cout << sum(input) << endl;
    // cout << sum2() << endl;
    // cout << sum3() << endl;
}