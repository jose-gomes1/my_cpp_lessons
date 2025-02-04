#include <iostream>

using namespace std;

void programa() {
    string frase;
    bool acertou = false;
    
    cout << "Qual é a frase?\n";
    getline(cin, frase);
    for (char &c : frase) {
        c = toupper(c);
    }

    string palavra_oculta = "";
    for (char ch : frase) {
        if (ch != ' ') {
            palavra_oculta += "*";
        } else {
            palavra_oculta += " ";
        }
    }

    system("clear");

    while (!acertou) {
        cout << palavra_oculta << endl;
        
        string guess;
        cout << "Adivinha uma letra: ";
        cin >> guess;

        for (char &d : guess) {
        d = toupper(d);
        }

        bool encontrou = false;

        for (size_t i = 0; i < frase.length(); i++) {
        if (frase[i] == guess[0]) {
            palavra_oculta[i] = guess[0];
            encontrou = true;
        system("clear");
        }
    }

        if (!encontrou) {
            system("clear");
            cout << "Letra não encontrada!\n";
        }

        if (palavra_oculta == frase) {
            acertou = true;
        }
    }

    cout << "Parabéns! A frase era: " << frase << endl;
}

int main() {
    programa();
    return 0;
}
