#ifndef theater_h
#define theater_h
#include <vector>
#include "abstractMilitary.h"
#include "ModesOfTransport.h"
#include "country.h"
class ModesOfTransport;
class country;
class abstractMilitary;
class Theater{
    protected:
        ModesOfTransport* modesOfTransport;
        abstractMilitary ***Military;
        int size,numFighters;
        country *Country;
        Theater *next;
    public:
        Theater(country *c,int s);
        void add(Theater*);
        virtual void addModeOfTransport(ModesOfTransport* m);
        virtual bool isEmpty();
        virtual void fight()=0;
        virtual void addMilitary(abstractMilitary* m);
        virtual ~Theater();
};

#endif