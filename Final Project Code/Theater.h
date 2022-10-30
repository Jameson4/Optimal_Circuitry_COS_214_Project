#ifndef theater_h
#define theater_h
#include <vector>
#include "abstractMilitary.h"
#include "ModesOfTransport.h"

class Theater{
    private:
        ModesOfTransport* ModesOfTransport;
        Theater *successor;
        abstractMilitary ***Military;
        int size;
    public:
        Theater(ModesOfTransport* ModesOfTransport,Theater *successor,abstractMilitary ***Military);
        virtual void addModeOfTransport(ModesOfTransport* m)=0;
        virtual bool isEmpty()=0;
        virtual void fight()=0;
        virtual void addMilitary(abstractMilitary* m)=0;
        virtual ~Theater();
};

#endif