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
    void func()
    {
        cout << "Inside first_space" << endl;

        cout << a::x << "\n";
    }
}

int main()
{
    b::func();
    cout << a::x << endl;
    return 0;
}