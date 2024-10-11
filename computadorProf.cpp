#include <iostream>

using namespace std;

/*
computador
métodos:ligar|desligar, reset, abrir tampa, executar, iniciar sistema operativo, iniciar GPU, remoção de ficheiros, receber inputs, formatar, abrir pastas
atributos:RAM, GPU, CPU, PSU, Motherboard, Disco Rigido, Caixa, Dispositivos Externos, Fans
*/

struct hardware{
    string ram;
    string gpu;
    string cpu;
    string psu;
    string caixa;
    string mb;
    string hd;
    string fans;
    char perifericos[5];
};

class Computer{
    private:

        hardware computer;
        bool state;

        void formatar(){
            cout << "O computador vai ser formatado\n";
        }

        void abrirPasta(){
            cout << "Pasta aberta\n";
        }

        void initOS(){
            cout << "O Sistema Operativo está a ser iniciado\n";
        }
        
        void initGPU(){
            cout << "A GPU está a ser iniciada\n";
        }

        void removerFicheiro(){
            cout << "O ficheiro vai ser removido\n";
        }

        void listarcomputer(){
        cout << "Hardware do computador: " << endl;
        cout << "RAM: " << computer.ram << endl;
        cout << "CPU: " << computer.cpu << endl;
        cout << "GPU: " << computer.gpu << endl;
        cout << "Motherboard: " << computer.mb << endl;
        cout << "Fonte de Alimentação (PSU): " << computer.psu << endl;
        cout << "Disco: " << computer.hd << endl;
        cout << "Ventoinhas: " << computer.fans << endl;
        cout << "Caixa: " << computer.caixa << endl;
        cout << "Perifericos: ";
        for(int i = 0; i < 5; i++){
            cout << "\t";
            cout << computer.perifericos[i];
        }
        cout << endl;
        }

    public:
    Computer(hardware hardware){
        this->computer = hardware;
        this->state = false;
        
        cout << "O computador foi instanciado com sucesso\nAgora vai lhe ligar, idiota\n";
        listarcomputer();
    }

    void ligar(){
        if(state){
            cout << "Já está ligado\n";
        }else{
            cout << "A ligar\n";
            this->state = true;
        }
    };
    //yipeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee

    void desligar(){
        if(state){
            cout << "A desligar\n";
            this->state = false;
        }else{
            cout << "Já ta desligado, cabeça\n";
        }}

    void reset(){
        if(state){
            cout << "A reinininininininiciar\n";
        }else{
            cout << "TAS DESLIGAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADO\n";
        }
    }

    void abrirTampa(){
        cout << "advghdhoawiwvajhfvbarfbwhfbhawui\n";
    }

    void executar(int op){
        switch(op){
            case 1:
            if(state){
                formatar();
            }else{
                cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAaaa\n";
            }
            case 2:
            if(state){
                abrirPasta();
            }else{ 
                cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAaaa\n";
            }
            case 3:
            if(state){
                removerFicheiro();
            }else{ 
                cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAaaa\n";
            }
            default:
            cout << "Erro Default\n";
        }
    }

    void inputs(string input){
        if(state){
            cout << "O pc está a receber inputs\n";
        }else{
            cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAa\n";
        }
    }
};

int main(){
    hardware hw1 = {"16GB", "RTX", "i9", "1000W", "Corsair", "Asus", "1TB", "Corsair", {'m', 'k', 'r', 'j', 'l'}};
    hardware hw2 = {"16GB", "RTX", "i9", "1000W", "Corsair", "Asus", "1TB", "Corsair", {'m', 'k', 'r', 'j', 'l'}};
    Computer computer1(hw1);
    Computer computer2(hw2);

    computer1.ligar();
    computer1.executar(2);
    computer1.executar(1);
    computer1.executar(3);
    computer1.inputs("Teclado");
}