#include <iostream>
using namespace std;

struct livro{
    string titulo;
    string autor;
    string subtitulo;
    string isbn;
    string data;
};

void insereLivro(livro &l){
    cout << "Qual o título do livro? ";
    cin >> l.titulo;
}

void mostraLivro(livro l){
    cout << "O título é: " << l.titulo << endl;
}

int main(){
    livro livro1;
    livro livro2;
    insereLivro(livro1);
    mostraLivro(livro1);
    return 0;
}