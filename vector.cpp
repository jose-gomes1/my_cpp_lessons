#include <iostream>
#include <vector>
using namespace std;

vector<int> numeros = {6, 7, 3, 2, 9, 0};

int main(){
    numeros.pop_back(); //apaga o ultimo valor
    numeros.push_back(35); //adiciona o valor
    numeros.insert(numeros.begin() + 2, 4);
    // numeros.erase(numeros.begin() + 2); apaga o valor
    // numeros.clear(); apaga o vetor todo
    for(int num : numeros){
        cout << num << endl;
    }
}