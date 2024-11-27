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
    datetime.tm_year = 2008 - 1900;
    datetime.tm_mon = 3;
    datetime.tm_mday = 20;
    datetime.tm_hour = 1;
    datetime.tm_min = 0;
    datetime.tm_sec = 0;

    datetime.tm_isdst = -1;

    timestamp = mktime(&datetime);
    cout << ctime(&timestamp);
}