#include <iostream>
using namespace std;
float x,y,z,total;

float xpto(float x,float y,float z=7.5){ //o default do C++ tem de ser na última variável ou continuar em todas as após
    return x*y*z;
}

int main(){
    x = 1.1; y = 2.2; z = 3.3;
    cout << xpto(1,1) << endl;
    return 0;
}
