#include <iostream>
#include <string>

using namespace std;

// Estrutura de Hardware fora da classe Computer para ser usada no main
struct Hardware {
    string ram;
    string cpu;
    string gpu;
    string motherboard;
    string psu;
    string disco;
    string perifericos;
    string fan;
};

class Computer {
private:
    bool ligado;
    Hardware hardware;  // Agora o hardware é passado como parâmetro

    // Método para abrir pastas
    void abrirPasta() {
        if (ligado) {
            cout << "Digite o nome da pasta que você deseja abrir: ";
            string pasta;
            cin >> pasta;
            cout << "Abrindo a pasta '" << pasta << "'...\n";
        } else {
            cout << "Erro: O PC está desligado. Não é possível abrir pastas.\n";
        }
    }

    // Método para executar uma tarefa personalizada
    void abrirPrograma() {
        if (ligado) {
            cout << "Digite o nome do programa que deseja executar: ";
            string programa;
            cin >> programa;
            cout << "Executando o programa '" << programa << "'...\n";
        } else {
            cout << "Erro: O PC está desligado. Não é possível executar tarefas.\n";
        }
    }

    // Método de formatação
    void formatar(){
        if(ligado){
            cout << "Formatando o PC...\n";
        } else {
            cout << "Erro: O PC está desligado. Não é possível formatar.\n";
        }
    }

public:
    // Construtor que aceita um objeto Hardware como parâmetro
    Computer(Hardware hw) : hardware(hw), ligado(false) {
        cout << "Computador montado com o seguinte hardware:\n";
        verHardware();
        cout << " " << endl;
    }

    // Método para ver os detalhes do hardware
    void verHardware() {
        cout << "RAM: " << hardware.ram << endl;
        cout << "CPU: " << hardware.cpu << endl;
        cout << "GPU: " << hardware.gpu << endl;
        cout << "Motherboard: " << hardware.motherboard << endl;
        cout << "Fonte de Alimentação (PSU): " << hardware.psu << endl;
        cout << "Disco: " << hardware.disco << endl;
        cout << "Periféricos: " << hardware.perifericos << endl;
        cout << "Ventoinhas: " << hardware.fan << endl;
    }

    // Método para ligar o computador
    void ligar() {
        if (!ligado) {
            ligado = true;
            cout << "Iniciando sistema operativo...\n";
            initOS();
        } else {
            cout << "O PC já está ligado.\n";
        }
    }

    // Método para iniciar o sistema operativo
    void initOS() {
        if (ligado) {
            cout << "Bem-vindo(a) ao sistema operativo.\n";
        } else {
            cout << "Erro: O PC está desligado.\n";
        }
    }

    // Método para resetar o computador
    void reset() {
        if (ligado) {
            cout << "Deseja reiniciar o sistema? (1 = Sim, 0 = Não): ";
            int escolha;
            cin >> escolha;
            if (escolha == 1) {
                cout << "Reiniciando o sistema...\n";
                ligar(); // Reinicia ligando novamente
            } else {
                cout << "Operação de reset cancelada.\n";
            }
        } else {
            cout << "O PC está desligado. Não é possível resetar.\n";
        }
    }

    // Método para desligar o computador
    void desligar() {
        if (ligado) {
            ligado = false;
            cout << "Desligando o computador...\n";
        } else {
            cout << "O PC já está desligado.\n";
        }
    }

    // Método para abrir a tampa do computador
    void abrirTampa() {
        cout << "Deseja abrir a tampa do computador? (1 = Sim, 0 = Não): ";
        int escolha;
        cin >> escolha;
        if (escolha == 1) {
            cout << "Tampa aberta.\n";
        } else {
            cout << "Operação de abrir tampa cancelada.\n";
        }
    }

    // Método para executar ações baseadas na escolha do usuário
    void executar(int i) {
        switch(i) {
            case 1:
                abrirPrograma();
                break;
            case 2:
                abrirPasta();
                break;
            case 3:
                formatar();
                break;
            default:
                cout << "Opção inválida para executar.\n";
                break;
        }
    }
};

int main() {
    // Criação de diferentes instâncias de hardware
    Hardware hw1 = {"16GB DDR4", "Intel Core i7", "NVIDIA RTX 3080", "ASUS Prime", "750W", "1TB SSD", "Teclado, Mouse", "3x Ventoinhas"};
    Hardware hw2 = {"32GB DDR5", "AMD Ryzen 9", "AMD Radeon RX 6900", "MSI Pro", "850W", "2TB NVMe", "Teclado Mecânico, Mouse", "4x Ventoinhas"};

    // Instanciar dois computadores com diferentes configurações de hardware
    Computer pc1(hw1);
    Computer pc2(hw2);

    int opcao;
    Computer* pcSelecionado = &pc1;  // Por padrão, o PC1 é selecionado

          cout << "----- Escolha do Computador -----\n";
        cout << "Selecione o computador: (1) PC1 (2) PC2\n";
        int pcChoice;
        cin >> pcChoice;
        if (pcChoice == 2) {
            pcSelecionado = &pc2;
        } else {
            pcSelecionado = &pc1;
        }

    do {
        cout << "1. Ligar o computador\n";
        cout << "2. Resetar o computador\n";
        cout << "3. Desligar o computador\n";
        cout << "4. Abrir tampa do computador\n";
        cout << "5. Abrir uma pasta\n";
        cout << "6. Executar um programa\n";
        cout << "7. Formatar PC\n";
        cout << "8. Ver Hardware\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                pcSelecionado->ligar();
                break;
            case 2:
                pcSelecionado->reset();
                break;
            case 3:
                pcSelecionado->desligar();
                break;
            case 4:
                pcSelecionado->abrirTampa();
                break;
            case 5:
                pcSelecionado->executar(2);
                break;
            case 6:
                pcSelecionado->executar(1);
                break;
            case 7:
                pcSelecionado->executar(3);
                break;
            case 8:
                pcSelecionado->verHardware();
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida! Tente novamente.\n";
        }
    } while (opcao != 0);

    return 0;
}
