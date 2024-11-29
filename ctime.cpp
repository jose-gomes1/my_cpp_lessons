#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

struct tm datetime;
time_t timestamp;

// int main(){
//     while(true){
//     time_t timestamp;
//     time(&timestamp);
//     system("clear");
//     cout << "Current time: " << ctime(&timestamp) << endl;
//     sleep(1);
//     }
// }

int main(){
    int ano;
    int mes;
    int dia;

    cout << "Insira o ano: ";
    cin >> ano;
    cout << "\nInsira o mês: ";
    cin >> mes;
    cout << "\nInsira o dia: ";
    cin >> dia;

    datetime.tm_year = ano - 1900;
    datetime.tm_mon = mes - 1;
    datetime.tm_mday = dia;

    datetime.tm_isdst = -1;

    timestamp = mktime(&datetime);
    time_t now = time(NULL);
    cout << "Tempo: " << ctime(&now) << endl;
    double seconds_diff = difftime(now, timestamp);
    int days_since = seconds_diff / 86400;
    cout << "Passaram-se " << days_since << " dias desde " << ctime(&timestamp);

    return 0;
}