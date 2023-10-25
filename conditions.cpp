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
    int result;
    cout << "Digite um número." << endl;
    cin >> num;
    result = num % 2;
    
    if(num >= 0){
        cout << "O número que escolheste é positivo." << endl;
    }else if (num < 0){
        cout << "O número que escolheste é negativo." << endl;
    }

    switch (result)
{
case 0: 
    cout << "O número é par." << endl;
    break;

default:
    cout << "O número não é par." << endl;
    break;
}

    return 0;
    }
 