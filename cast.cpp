#include <iostream>

using namespace std;

const int NUM_COLUNAS = 20;

void showASCIITable()
{
    int i = 0;
    for (int x = 33; x <= 127; x++)
    {
        i++;
        cout << (char)x << "\t";
        if( (i % NUM_COLUNAS == 0) || i >= 94){
            cout << "\n";
        }
    }
}

int main()
{
    showASCIITable();
    return 0;
}