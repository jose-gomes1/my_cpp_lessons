#include <iostream>

using namespace std;

string name = "Paulo";
int number = 123;
float numberfloat = 3.14;
auto naoSei = "Não sei"; //apenas para variáveis sem certeza
unsigned int altura = 10; //não pode ser negativo

void testes(){
    int a;
    a = 'A'; //não dá com "", pois assume como string

    cout << a << endl; //valor ASCII de 'A'
    cout << "Escape\\Characters\n";

    char lower = 'd';
    char upper = lower - 32;
    cout << upper << endl;

}

void maiusculas(){
    char letra;
    cout << "Insira uma letra minúscula: ";
    cin >> letra;
    cout << "A letra " << letra << " em maiúsculas é: " << (char)(letra - 32) << endl;
}

void equacaoA(){
    float x1, x2, y1, y2;
    cout << "Insira, em ordem, x1, x2, y1 e y2: ";
    cin >> x1 >> x2 >> y1 >> y2;
    cout << "X1 = " << x1 << endl;
    cout << "X2 = " << x2 << endl;
    cout << "Y1 = " << y1 << endl;
    cout << "Y2 = " << y2 << endl;
    //conta
    cout << "Para a equação (x1 + x2)/2, o resultado é: " << (x1+x2)/2 << endl;
    cout << "Para a equação (y1 + y2)/2, o resultado é: " << (y1+y2)/2 << endl;
    cout << "O vector de saída é: " << "(" << (x1+x2)/2 << " , " << (y1+y2)/2 << ")" << endl;
}

void power(){ //nasted conditions
    char resposta;
    cout << "Has power?\n";
    cin >> resposta;
    if(resposta == 'y'){
        cout << "Seek other help\n";
    }else{
        cout << "Plugged in?\n";
        cin >> resposta;
        if(resposta == 'y'){
            cout << "Is the switch on?\n";
            cin >> resposta;
            if(resposta == 'y'){
                cout << "Fuse Ok?\n";
                cin >> resposta;
                if(resposta == 'y'){
                    cout << "Seek other help\n";
                }else{
                    cout << "Check the fuse\n";
                }
            }
            else{
                cout << "Turn it on\n";
            }
        }
        else{
            cout << "Plug it in\n";
        }
    }
    
}

void conditions(){
    int count = 1;
    while(count <= 5){
        cout << count << endl;
        count++;
    }
}

int main(){
    conditions();
    maiusculas();
    power();
    equacaoA();
    return 0;
}