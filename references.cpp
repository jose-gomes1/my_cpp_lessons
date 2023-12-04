#include <iostream>
using namespace std;

//reference is an alternative name for a variable
string food = "Pizza";

//create a reference for a variable
string &meal = food;

int main(){
    cout << food << "\n";                      //outputs food "Pizza"
    cout << &food << "\n";                      //outputs memory adress "0x564d9d80b160"
    cout << meal << "\n";                      //outputs meal "Pizza"
    cout << &meal << "\n";                      //outputs memory adress "0x564d9d80b160"
    return 0;
}