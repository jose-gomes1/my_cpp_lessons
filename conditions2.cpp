#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int a=10, b=12, c=9;

int main1(){

    if ( a < b){
        cout << "CÊ TA CERTO" << endl;
    }else if (a<c){
        cout << "CÊ TA CERTO" << endl;
    }else{
        cout << "CÊ TA ERRADO" << endl;
    }
    



    return 0;
}

int main2(){
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

        int test[4] = {7,8,9,8};
        for(int i=0; i<4; i++){
            cout << test[i] << endl;
        }

        return 0;
    }