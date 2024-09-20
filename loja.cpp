#include <iostream>
using namespace std;

const int maximoProdutos = 100; // Limite máximo de produtos

struct Produto {
    string nome;
    float preco;
    int quantidade;
};

// Função para adicionar um produto ao array de produtos
void adicionarProduto(Produto produtos[], int& quantidadeAtual) {
    if (quantidadeAtual >= maximoProdutos) {
        cout << "Limite de produtos atingido!" << endl;
        return;
    }

    Produto novoProduto;
    cout << "Qual será o nome do produto? ";
    cin >> novoProduto.nome;
    cout << "O preço: ";
    cin >> novoProduto.preco;
    cout << "E, finalmente, a quantidade: ";
    cin >> novoProduto.quantidade;

    // Adicionar o novo produto ao array na posição atual
    produtos[quantidadeAtual] = novoProduto;
    quantidadeAtual++; // Incrementar a quantidade atual de produtos
}

// Função para exibir todos os produtos no array
void exibirProdutos(const Produto produtos[], int quantidadeAtual) {
    if (quantidadeAtual == 0) {
        cout << "Nenhum produto cadastrado!" << endl;
        return;
    }

    cout << "Produtos cadastrados:\n";
    for (int i = 0; i < quantidadeAtual; i++) {
        cout << "Produto " << i + 1 << ":\n";
        cout << "Nome: " << produtos[i].nome << endl;
        cout << "Preço: " << produtos[i].preco << endl;
        cout << "Quantidade: " << produtos[i].quantidade << endl;
    }
}

// Função para calcular o valor total do stock
float calcularValorTotal(const Produto produtos[], int quantidadeAtual) {
    if (quantidadeAtual == 0) {
        cout << "Nenhum produto cadastrado!" << endl;
        return 0.0;
    }

    float valorTotal = 0;
    for (int i = 0; i < quantidadeAtual; i++) {
        valorTotal += produtos[i].preco * produtos[i].quantidade;
    }

    cout << "Valor total do stock: " << valorTotal << endl;
    return valorTotal;
}

int main() {
    Produto produtos[maximoProdutos]; // Array de produtos
    int quantidadeAtual = 0; // Quantidade de produtos cadastrados
    int opcao;

    // Usar um laço para exibir o menu até que o usuário escolha sair
    do {
        cout << "1. Adicionar Produto\n";
        cout << "2. Exibir Produtos\n";
        cout << "3. Calcular Valor Total do Stock\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        // Verificar a opção escolhida e executar a ação correspondente
        switch (opcao) {
            case 1:
                adicionarProduto(produtos, quantidadeAtual);  // Adicionar o produto
                break;
            case 2:
                exibirProdutos(produtos, quantidadeAtual);  // Exibir todos os produtos
                break;
            case 3:
                calcularValorTotal(produtos, quantidadeAtual);  // Calcular valor total do stock
                break;
            case 0:
                cout << "Adeus..." << endl;  // Sair do programa
                break;
            default:
                cout << "Opção inválida, tente novamente!" << endl;
                break;
        }
    } while (opcao != 0);  // Continuar até que a opção seja "0"

    return 0;
}
