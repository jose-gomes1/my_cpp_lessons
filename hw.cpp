#include "hw.h"

Hw::Hw(){
    this->text = "Hello World";
}

Hw::Hw(string text){
    this-> text = text;
}

void Hw::world(){
    cout << text << endl;
}