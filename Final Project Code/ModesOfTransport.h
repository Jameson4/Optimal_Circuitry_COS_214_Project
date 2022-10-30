#ifndef Modes_h
#define Modes_h
#include "Theater.h"
class ModesOfTransport{
    private:
        Theater* theaters;
        bool isOperational;
        int damage;
        int health;
    public:
        ModesOfTransport( Theater* theaters,bool isOperational,int damage,int health);
        bool getsOperational();
        void setisOperational(bool isOperational);
        void attack();
};

#endif