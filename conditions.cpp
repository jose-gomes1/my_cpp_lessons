#include <iostream>
using namespace std;

int a=10, b=12, c=9;

int main2(){

    if ( a < b){
        cout << "CÊ TA CERTO" << endl;
    }else if (a<c){
        cout << "CÊ TA CERTO" << endl;
    }else{
        cout << "CÊ TA ERRADO" << endl;
    }
    



    return 0;
}

int main(){
    int num;

    cout << "Digite um número." << endl;
    cin >> num;
    
    if(num >= 0){
        cout << "O número que escolheste é positivo" << endl;
    }else if (num < 0){
        cout << "O número que escolheste é negativo" << endl;
    }
    return 0;
    }