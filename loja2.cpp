#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

const int maximoProdutos = 100; // Limite máximo de produtos

struct Produto {
    int id;
    string nome;
    int quantidade;
    float preco;
    char status; // 'A' para Ativo, 'D' para Eliminado
};

// Função para ler produtos do arquivo CSV
int carregarProdutos(Produto produtos[]) {
    ifstream dB("db.csv");
    int quantidadeAtual = 0;

    // Verifica se o arquivo está aberto
    if (dB.is_open()) {
        string linha;
        while (getline(dB, linha) && quantidadeAtual < maximoProdutos) {
            stringstream ss(linha);
            string idStr, quantidadeStr, precoStr, statusStr;

            getline(ss, idStr, ',');
            getline(ss, produtos[quantidadeAtual].nome, ',');
            getline(ss, quantidadeStr, ',');
            getline(ss, precoStr, ',');
            getline(ss, statusStr);

            produtos[quantidadeAtual].id = stoi(idStr);
            produtos[quantidadeAtual].quantidade = stoi(quantidadeStr);
            produtos[quantidadeAtual].preco = stof(precoStr);
            produtos[quantidadeAtual].status = statusStr[0];
            quantidadeAtual++;
        }
        dB.close();
    }
    return quantidadeAtual;
}

// Função para salvar produtos no arquivo CSV
void salvarProdutos(const Produto produtos[], int quantidadeAtual) {
    ofstream dB("db.csv");
    // Verifica se o arquivo está aberto
    if (dB.is_open()) {
        for (int i = 0; i < quantidadeAtual; i++) {
            dB << produtos[i].id << "," 
               << produtos[i].nome << ","
               << produtos[i].quantidade << ","
               << produtos[i].preco << ","
               << produtos[i].status << endl;
        }
        dB.close();
    } else {
        cerr << "Erro ao abrir a base de dados\n";
    }
}

// Função para adicionar um produto
void adicionarProduto(Produto produtos[], int& quantidadeAtual) {
    if (quantidadeAtual >= maximoProdutos) {
        cout << "Limite de produtos atingido!" << endl;
        return;
    }

    Produto novoProduto;
    novoProduto.id = quantidadeAtual + 1; // Atribui um ID sequencial
    cout << "Qual será o nome do produto? ";
    cin.ignore();
    getline(cin, novoProduto.nome);
    cout << "Quantidade em stock: ";
    cin >> novoProduto.quantidade;
    cout << "Preço unitário: ";
    cin >> novoProduto.preco;
    novoProduto.status = 'A'; // Definido como Ativo

    produtos[quantidadeAtual] = novoProduto;
    quantidadeAtual++;
}

// Função para exibir todos os produtos
void exibirProdutos(const Produto produtos[], int quantidadeAtual) {
    if (quantidadeAtual == 0) {
        cout << "Nenhum produto cadastrado!" << endl;
        return;
    }

    cout << "Produtos cadastrados:\n";
    for (int i = 0; i < quantidadeAtual; i++) {
        if (produtos[i].status == 'A') { // Exibe apenas produtos ativos
            cout << "ID: " << produtos[i].id << ", "
                 << "Nome: " << produtos[i].nome << ", "
                 << "Quantidade: " << produtos[i].quantidade << ", "
                 << "Preço: " << produtos[i].preco << ", "
                 << "Status: " << produtos[i].status << endl;
        }
    }
}

// Função para alterar um produto
void alterarProduto(Produto produtos[], int quantidadeAtual) {
    int id;
    cout << "Digite o ID do produto que deseja alterar: ";
    cin >> id;

    // Procura o produto pelo ID
    for (int i = 0; i < quantidadeAtual; i++) {
        if (produtos[i].id == id && produtos[i].status == 'A') {
            cout << "Alterando produto " << produtos[i].nome << ":\n";
            cout << "Novo nome: ";
            cin.ignore();
            getline(cin, produtos[i].nome);
            cout << "Nova quantidade: ";
            cin >> produtos[i].quantidade;
            cout << "Novo preço: ";
            cin >> produtos[i].preco;
            return;
        }
    }
    cout << "Produto não encontrado ou já eliminado." << endl;
}

// Função para eliminar um produto
void eliminarProduto(Produto produtos[], int& quantidadeAtual) {
    int id;
    cout << "Digite o ID do produto que deseja eliminar: ";
    cin >> id;

    // Procura o produto pelo ID
    for (int i = 0; i < quantidadeAtual; i++) {
        if (produtos[i].id == id) {
            produtos[i].status = 'D'; // Marca como eliminado
            cout << "Produto " << produtos[i].nome << " foi eliminado." << endl;
            return;
        }
    }
    cout << "Produto não encontrado." << endl;
}

// Função para perguntar se o usuário deseja criar um novo arquivo
bool perguntarCriarArquivo() {
    int opcao;
    cout << "Arquivo 'db.csv' não encontrado." << endl;
    cout << "Deseja criar um novo arquivo? (1 - Sim, 2 - Não): ";
    cin >> opcao;
    return (opcao == 1);
}

int main() {
    Produto produtos[maximoProdutos]; // Array de produtos
    int quantidadeAtual = 0; // Contador de produtos

    // Carregar produtos do arquivo
    quantidadeAtual = carregarProdutos(produtos);

    // Verifica se algum produto foi carregado
    if (quantidadeAtual == 0 && !perguntarCriarArquivo()) {
        cout << "Encerrando o programa..." << endl;
        return 0;
    }

    // Caso o usuário escolha criar um novo arquivo, apenas continue
    cout << "Você pode começar a adicionar produtos." << endl;

    int opcao;

    do {
        cout << "\n1. Adicionar Produto\n";
        cout << "2. Exibir Produtos\n";
        cout << "3. Alterar Produto\n";
        cout << "4. Eliminar Produto\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarProduto(produtos, quantidadeAtual);
                salvarProdutos(produtos, quantidadeAtual); // Salva após adicionar
                break;
            case 2:
                exibirProdutos(produtos, quantidadeAtual);
                break;
            case 3:
                alterarProduto(produtos, quantidadeAtual);
                salvarProdutos(produtos, quantidadeAtual); // Salva após alterar
                break;
            case 4:
                eliminarProduto(produtos, quantidadeAtual);
                salvarProdutos(produtos, quantidadeAtual); // Salva após eliminar
                break;
            case 0:
                cout << "Adeus..." << endl;
                break;
            default:
                cout << "Opção inválida, tente novamente!" << endl;
                break;
        }
    } while (opcao != 0);

    return 0;
}
