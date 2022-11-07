#ifndef Modes_h
#define Modes_h
#include "Theater.h"
#include "abstractMilitary.h"
class country;
class Theater;
class abstractMilitary;
class ModesOfTransport{
    protected:
        Theater* theaters;
        bool isOperational;
        int damage;
        int health;
        country* Country;
    public:
        ModesOfTransport(country*,Theater*);
        ModesOfTransport( Theater* theaters,bool isOperational,int damage,int health);
        bool getsOperational();
        void setisOperational(bool isOperational);
        void attack();
        virtual void transport(abstractMilitary *troop)=0;
};

#endif