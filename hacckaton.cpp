#include <iostream>
using namespace std;

void ciclo_for(){
    for(int i = 100; i >= 0; i-=5){
        cout << i << endl;
    }
}

void ciclo_while(){
    int x = 0;
    while(x < 100){
        x++;
        cout << x << endl;
    }
}

void e(){
    int a = 2;
    int b = 5;

    if(a >= 5 && b >= 5){
        cout << "a e b são maiores que 5\n";
    }else{
        cout << "Nuh uh\n";
    }
}

void menu(){
    int opcao;
    cin >> opcao;
    switch(opcao){
        case 1:
        ciclo_for();
        break;
        ciclo_while();
        break;
        default:
        e();
        break;
    }
}

int main(){
    const int XPTO = 123;

    char array[5] = {'a', 'e', 'i', 'o', 'u'};
    menu();

    return 0;
}