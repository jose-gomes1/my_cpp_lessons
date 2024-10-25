//implementação

#include "refrigerante.h"

Refrigerante::Refrigerante(){
    this-> marca = "";
    this-> sabor = "";
    this-> acucar = 0;
    this-> mli = 0;
    this-> currentml = 0;
}

Refrigerante::Refrigerante(string marca, string sabor, int acucar, int mli, int currentml){
        this-> marca = marca;
        this-> sabor = sabor;
        this-> acucar = acucar;
        this-> mli = mli;
        this-> currentml = currentml;
}

Refrigerante::~Refrigerante(){
    cout << "Destrutor chamado" << endl;
}

void Refrigerante::abrirLata(){
        if (!aberta) {
            aberta = true;
            cout << "A lata foi aberta.\n";
        } else {
            cout << "A lata já está aberta!\n";
        }
}

void Refrigerante::beber(){
        if (!aberta) {
            cout << "Não consegues beber o refrigerante sem abrir a lata, idiota!\n";
        } else {
            while(currentml >= 0){
                cout << "Estás a beber o teu refrigerante, a lata tem " << currentml << "ml\n";
                currentml--;
            }
            if(currentml <= 0){
                cout << "A tua lata está vazia\n";
        }
    }
}

void Refrigerante::verRotulo(){
        cout << "Viraste  a lata e viste o rótulo\nLá estava escrito:\n";
        cout << marca << " de " << sabor << " com " << acucar << " gramas de açucar e " << mli << "ml\n";
}

void Refrigerante::atirar(){
        srand (time(NULL));
        string pessoa;
        cout << "Queres atirar na cabeça de quem?\n";
        cin.ignore();
        getline(cin, pessoa);
        int chance = rand() % 10 + 1;
        if (chance < 5){
            cout << chance << endl;
            cout << "Erraste a garrafa que atiraste contra o(a) " << pessoa << " e perdeste-a\nO programa irá fechar\n";
        }else if (chance > 5){
        cout << chance << endl;
        cout << "Deste um grande de um arrejeito nessa garrafa! Acertaste, em cheio, no(a) " << pessoa << "\nJá não tens mais garrafa, o programa está a fechar\n";
        }
}

void Refrigerante::executar(int op){
            switch(op){
            case 1:
            abrirLata();
            break;
            case 2:
            beber();
            break;
            case 3:
            verRotulo();
            break;
            case 4:
            atirar();
            break;
        }
    }