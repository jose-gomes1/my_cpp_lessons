#include <iostream>
using namespace std;
int numeros[10] = {1,2,3,4,5,6,7,8,9,10};

// double theDouble(double x){
//     return x*2;
// }

int main(){
    // double dobro = theDouble(5);
    // cout << dobro << endl;
    // double dDouble = theDouble(theDouble(5));
    // cout << dDouble << endl;
    for(int n = 0; n < 10; n++){
        if(numeros[n]%2 == 0){
            cout << numeros[n] << " é par" << endl;
        }
        else if(numeros[n]%2){
            cout << numeros[n] << " é impar" << endl;
        }
    }
    return 0;
}