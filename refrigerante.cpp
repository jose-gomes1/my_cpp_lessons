#include <iostream>
#include <time.h>

using namespace std;

//sabor - atributo, açucar - atributo, marca - atributo, abrir lata - metodo

class Refrigerante{
    private:
    bool aberta = false;
    string marca;
    string sabor;
    int acucar;
     int mli;
    int currentml;
    public:

    Refrigerante(string marca, string sabor, int acucar, int mli, int currentml){
        this-> marca = marca;
        this-> sabor = sabor;
        this-> acucar = acucar;
        this-> mli = mli;
        this-> currentml = currentml;
    }

    void abrirLata() {
        if (!aberta) {
            aberta = true;
            cout << "A lata foi aberta.\n";
        } else {
            cout << "A lata já está aberta!\n";
        }
    }

    void beber() {
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

    void atirar(){
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

    void verRotulo(){
        cout << "Viraste  a lata e viste o rótulo\nLá estava escrito:\n";
        cout << marca << " de " << sabor << " com " << acucar << " gramas de açucar e " << mli << "ml\n";
    }
};

int main(){
    Refrigerante Fanta1("Fanta", "Ananás", 0, 330, 330);
    int opcao;

do{
    cout << "1. Abrir Lata\n";
    cout << "2. Beber refrigerante\n";
    cout << "3. Ver rótulo\n";
    cout << "4. Atirar garrafa\n";
    cout << "Escolhe uma opção: ";
    cin >> opcao;

    switch(opcao){
        case 1:
        Fanta1.abrirLata();
        break;
        case 2:
        Fanta1.beber();
        break;
        case 3:
        Fanta1.verRotulo();
        break;
        break;
        case 4:
        Fanta1.atirar();
        break;
    }
}while (opcao != 4);

return 0;
}