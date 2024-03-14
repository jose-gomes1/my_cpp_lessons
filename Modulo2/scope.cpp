#include <iostream>
#include <unistd.h>
using namespace std;

const float PI = 3.1415;
float xpto2 = 2.3;
int teste(){
    static const int xpto = 3;
    return xpto;
}

int main() {
    int c = 0;
    while(c<=10){
        cout << c << endl;
        sleep(1);
        c++;
    }
}