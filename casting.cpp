#include <iostream>

using namespace std;

int main()
{
    int i = 80;
    float f = 3.2412;
    char c = 'a';

    //Cast implicito
    float f2 = i;
    char c2 = i;
    cout << "f2: " << f2 << endl;
    cout << "c2: " << c2 << endl;

    //Cast explicito
    int i2 = (int)f;
    int i3 = (int)c;
    char c3 = (int)i;
    cout << "i2: " << i2 << endl;
    cout << "i3: " << i3 << endl;
    cout << "c3: " << c3 << endl;
}