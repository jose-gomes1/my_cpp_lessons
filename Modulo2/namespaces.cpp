#include <iostream>

using namespace std;

namespace a
{
    int x = 20;
    void func()
    {
        cout << "Inside xpto1" << endl;
    }
}

namespace b
{
    int x = a::x * 2;
    void func()
    {
        cout << x << "\n";
        cout << a::x << "\n";
        a::x = 60;
        cout << x << "\n";
        x = a::x * 2;
        cout << x << "\n";
    }
}


int main()
{
    b::func();
    return 0;
}
