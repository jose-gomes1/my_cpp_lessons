#include <iostream>

using namespace std;

struct lata{

    string marca;
    string sabor;
    string validade;
    string fornecedor;
    string codBarras;
    string lote;
    string dataFabricacao;
    string infoFornecedor;
    string materialEmbalagem;
    string infoNutricional[5];

    double capacidade;
    double preco;
    double peso;

    bool status;

};

class Refrigerante{

    private:
        lata refrigerante;
        double qntSumoDisponivel;

    public:

    Refrigerante(lata lata){
        refrigerante = lata;
        qntSumoDisponivel = lata.capacidade;
    }

    void abrirLata(){
        if(refrigerante.status == false){
            cout << "A abrir a lata... fssssssssssssssssssssssss" << endl;
            refrigerante.status = true;
        }
    }

    void beberRefrigerante(){
        double qnt;
        if(qntSumoDisponivel = 0){
            cout << "Não há refrigerante dispoível\n";
        }
        
        if(refrigerante.status){
            cout << "Há " << qntSumoDisponivel << " litros de refrigerante\n";
            cout << "Digite a quantidade de refrigerante que deseja beber\n";
            cin >> qnt;
            if(qnt <= qntSumoDisponivel){
                qntSumoDisponivel -= qnt;
                cout << "Vós bebeis " << qnt << " litros de refrigerante" << endl;
            }else{
                cout << "Não há sumo\n";
            }
        }else{
            cout << "Abre a lata, seu austrolopiteco\n";
        }
    }

};

int main(){
    lata lata1 = {"Coca-Cola", "Cola", "10/10/2021", 
                "Coca-Cola", "123456789", "123456", 
                "10/10/2020", "Coca-Cola Company",
                "Aluminio", {"Calorias: 100",
                            "Carbohidratos: 30",
                            "Proteina: 0",
                            "Gorduras: 0",
                            "Sodio: 10"},
                350, 5.00, 0.350, false};

Refrigerante refri1(lata1);
while(true){
    int opcao;
    cout << "1 - Abrir lata\n";
    cout << "2 - Beber refrigerante\n";
    cout << "3 - Sair\n";
    cout << "Escolha uma opcao: ";
    cin >> opcao;

    if(opcao == 1){
        refri1.abrirLata();
}else if(opcao == 2){
    refri1.beberRefrigerante();
}else if (opcao == 3){
    break;
}else{
    cout << "Opcao invalida\n";
}
}
}
