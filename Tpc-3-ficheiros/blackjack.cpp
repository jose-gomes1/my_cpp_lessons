#include <iostream>
#include <random>
#include <ctime>

using namespace std;

struct Player {
    int total;
    bool isDealer;
    void hit() {
        total += rand() % 10 + 1;
    }
    bool hasLost() {
        return total > 21;
    }
};

void jogo() {
    Player player = { rand() % 21 + 1, false };
    Player dealer = { rand() % 10 + 1, true };
    cout << "O valor das tuas cartas e: " << player.total << endl;
    cout << "O valor das cartas do teu dealer e: " << dealer.total << " + x" << endl;
    char opcao;

    while (true) {
        cout << "O que vais fazer?\n(h - hit, s - stand)\n";
        cin >> opcao;
        switch (opcao) {
            case 'h':
            case 'H':
                player.hit();
                cout << "Tu tiraste mais uma carta. O teu total e: " << player.total << endl;
                break;
            case 's':
            case 'S':
                cout << "Tu decidiste parar. O teu total e: " << player.total << endl;
                goto DealerTurn;
            default:
                cout << "Opcao invalida! Escolhe 'h' para hit ou 's' para stand." << endl;
                break;
        }
        if (player.hasLost()) {
            cout << "Tu perdeste! O teu total de cartas e: " << player.total << endl;
            return;
        }
    }
    DealerTurn:
    cout << "O dealer vai jogar..." << endl;
    cout << "O total inicial do dealer e: " << dealer.total << endl;

    while (dealer.total < 17) {
        dealer.hit();
        cout << "O dealer tirou uma carta. O total dele agora e: " << dealer.total << endl;
        if (dealer.hasLost()) {
            cout << "O dealer perdeu! O dealer tem " << dealer.total << endl;
            cout << "Tu ganhaste com " << player.total << endl;
            return;
        }
    }

    if (player.hasLost()) {
        cout << "Tu perdeste! O teu total de cartas e: " << player.total << endl;
    } else if (player.total > dealer.total) {
        cout << "Tu ganhaste com " << player.total << endl;
        cout << "O dealer tinha " << dealer.total << endl;
    } else if (player.total < dealer.total) {
        cout << "Tu perdeste! O dealer tinha " << dealer.total << endl;
    } else {
        cout << "Empate! Ambos tem " << player.total << endl;
    }
}

int main() {
    srand(time(0));
    jogo();
    return 0;
}