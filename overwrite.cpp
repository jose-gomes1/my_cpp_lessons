#include <iostream>
using namespace std;

// int sum(int k){
//     if(k > 0){
//         return k + sum(k - 1);
//     }else{
//         return 0;
//     }
// }

int main(){
    int result = sum(10);
    cout << result << endl;
}

int soma(int x, int y){
    return x + y;
}

float soma(float x, float y){
    return x + y;
}

double soma(double x, double y){
    return x + y;
}

int main(){
    cout << "Int: " << soma(4, 6) << endl;
    cout << "Float: " << soma(2.5, 5.0) << endl;
    cout << "Double: " << soma(3.14151450, 6.14543450) << endl;
}
