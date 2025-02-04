#ifndef TRABALHO_H
#define TRABALHO_H
#include <iostream>
using namespace std;

class Programa{
    private:
    string nickname;
    string frase;
    bool acertou = false;
    string guess;
    bool encontrou = false;
    public:
    Programa(string nickname);
    void programa();
};

#endif