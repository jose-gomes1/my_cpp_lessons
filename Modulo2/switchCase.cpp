#include <iostream>

using namespace std;

void option1(){
    cout << "Option 1\n";
}
void option2(){
    cout << "Option 2\n";
}
void option3(){
    cout << "Option 3\n";
}


int main(){
    int n;
    cin >> n;
    switch(n){
//case, default, break

    case 1:
        option1();
        break;
    case 2:
        option2();
        break;
    case 3:
        option3();
        break;
    default:
        cout << "Not an option, sorry\n";
        break;
    }
}