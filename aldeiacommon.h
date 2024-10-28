#ifndef ALDEIACOMMON_H
#define ALDEIACOMMON_H
#endif

#include <iostream>
using namespace std;

class Common{
    private:
    enum status{
        alive,
        dead,
        asleep
    };

    int id;
    char character; // w - wolves, z - vident, v - villager
    string playerName;
    
    int setStatus(); //dispensável
    int getStatus();
    int setCharacter();
    int getCharacter();
    int setId();
    int getId();
    int sleep();
    int wakeUp();
    int die();
};