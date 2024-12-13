#include <iostream>
#define Y "teste" 
using namespace std;

class A{
    public:
    int pubA = 2;
    private:
    int privA = 1;
    protected:
    int protA = 120;
};

class B {
    public:
    int pubB = 463894120113890;
    private:
    int privB = 11111111111;
    protected:
    int protB = 890214890124;
};

class C : public A, public B{
    public:
    int pubC = 463894120113890;
    private:
    int privC = 11111111111;
    protected:
    int protC = 890214890124;
};

int main(){
    return 0;    
}