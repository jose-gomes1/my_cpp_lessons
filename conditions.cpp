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

int main3(){
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

    while (num < 5)
    {
        cout << "Digite um número." << endl;
        cin >> num;
    }

    return 0;
    }

    int main(){
        int num=0;
        int numSorte=20;
        while (numSorte != num)
        {
            cout << "Qual o número da sorte?" << endl;
            cin >> num;
            if(numSorte > num){
                cout << "O número da sorte é maior que esse número, cabeça de meia tigela" << endl;
            }else if(numSorte < num){
                cout << "O número da sorte é menor que esse número, cabeça de meia tigela" << endl;
            }else{
                cout << "Parabéns! Acertaste o número, seu sem vida" << endl;
            }
            
        }
        cout << "Acabou o jogo" << endl;
    
        return 0;   
    }