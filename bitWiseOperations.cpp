#include <iostream>
#include <unistd.h>

using namespace std;

int state = 0;

void luzes() {
    for (int i = 0; i < 10; i++) {
        if (state == 0) {
            usleep(500000);
            cout << "🟩 🟥 🟩 🟥 🟩 🟥 🟩 🟥 🟩 🟥" << endl;
            state = 1;
        } else {
            usleep(500000);
            cout << "🟥 🟩 🟥 🟩 🟥 🟩 🟥 🟩 🟥 🟩" << endl;
            state = 0;
        }
    }
}



int main(){

    luzes();

    int a = 12, b = 25;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;

    return 0;
}