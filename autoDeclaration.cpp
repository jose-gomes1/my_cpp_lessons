#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

string name = "Paulo";
int number = 123;
float numberfloat = 3.14;
auto naoSei = "Não sei"; //apenas para variáveis sem certeza
unsigned int altura = 10; //não pode ser negativo
unsigned int dimensao;

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

void matriz(int dim){

    system("clear");

    for(int b = 0; b <= dim + 1; b++){
        cout << "#--";
    }
    cout << endl;

    for(int a = 1; a <= dim; a++){
        cout << "|" << setw(3) << a;
    }
    cout << "|\n";

    for(int b = 0; b <= dim + 1; b++){
        cout << "-#-";
    }
    cout << endl;

    for(int i = 1; i <= dim; i++){
        for(int l = 1; l <= dim; l++)cout << "|" << setw(3) << i*l;
        cout << "|";
        cout << endl;
    }

        for(int b = 0; b <= dim + 1; b++){
        cout << "--#";
    }
    cout << endl;
}

void tabelaBingo(int dim){
    int count;
    system("clear");

    for(int a = 1; a <= dim; a++){
        cout << "|" << setw(3) << a;
    }
    cout << "|\n";

    for(int b = 0; b <= dim + 1; b++){
        cout << "---";
    }
    cout << endl;

    for(int i = 1; i <= dim; i++){
        for(int l = 1; l <= dim; l++)cout << "|" << setw(3) << ++count;
        cout << "|";
        cout << endl;
    }
}

int main(){
    system("clear");
    cout << "Digite as dimensões da matriz: ";
    cin >> dimensao;

    if(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "ERRO: Valor inválido\n";
        return 1;
    }else{
        tabelaBingo(dimensao);
        //matriz(dimensao);
    }


    // conditions();
    // maiusculas();
    // power();
    // equacaoA();
    return 0;
}