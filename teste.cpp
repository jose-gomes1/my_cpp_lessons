#include <iostream>
using namespace std;

int NUM_PORT_SENS_HUM = 5;

   int oMeuNumero = 10;   //números inteiros
   double oMeuNumeroInteiro = 10.5;  //números reais
   char oMeuCaracter = 'a';   //caracteres
   string oMeuTexto = "Byte é a unidade de medida na informática";  //texto
   bool oMeuBooleano = true;  //booleano  //1 = Verdadeiro; 0 = Falso
   int myBool = 1;   //true
   int sensorTemperatura = 10;
   const double PI = 3.14159265359;   //constante
   int x = 2, z = 3, y = 14;
   int minutosPorHora=60;
   int numero; 
   int raio; 

   int main()
   {
    int a = 5;
    int b = 5;
    int c = 2;
    int d = 1;
    int result = a&=4;
    cout << result << endl;
    return 0;
   }

   int main2()
   {    
    //tendo em consideração que a área do círculo é PI * raio * raio, calcula a área do círculo com raio digitado pelo usuário
    cout << "Qual é o raio do círculo?" << endl;   //imprime no ecrã
    cin >> raio;  //lê do teclado
    double area = PI * raio * raio;
    cout << area << endl;
    return 0;
   }

   int main3()
   {
    //tendo em consideração que a área do círculo é PI * raio * raio, calcula a área do círculo com raio 10
    int r = 10;
    double area = PI * r * r ;
    cout << area << endl;

    return 0;
   }

   int main4()
   {
    cout << "Digite um número: ";   //imprime no ecrã
    cin >> numero;  //lê do teclado
    cout << "O número que digitaste foi:" << numero << endl;
    return 0;
   }


   int main5()
   {
    cout << PI << " Valor de PI\n";   //comentário
    cout << sensorTemperatura << " valor do sensor de temperatura\t";

    sensorTemperatura = 20;
    cout << sensorTemperatura << " valor do sensor de temperaura\t" << PI << "valor de PI\t";
    return 0;
   }
/*
*@author sou eu
*teste
*
*/

; int main6()
{
    cout << "Hello \\ World!\t";  //comentário
    cout << "I'm a C++ program\n";   
    int minutosPorHora=60;

    cout << oMeuTexto << endl; 
    cout << "\n";
    return 0;
}

    /**
     * @brief
     * 
     * @param a número inteiro
    */
//1 byte = 8 bits
//byte é a unidade de medida na informática
//tipo da variável nomeDaVariavel = valor
//nome da variável tem de ser em CamelCase e tem de ser intuitívo
//escrever em inglês, não em português