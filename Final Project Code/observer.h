#ifndef Observer_h
#define Observer_h
#include "SimulationMaster.h"
#include"abstractMilitary.h"
#include"country.h"
#include<string>
class SimulationMaster;
class Observer{
    public:
        Observer();
        virtual void update()=0;
        virtual void report()=0;
        virtual void setPhase(std::string)=0;
        virtual void getName(std::string)=0;
        virtual void enrollTroop(abstractMilitary*)=0;
    protected:
        SimulationMaster *mediator;        
        abstractMilitary** troops;
        int NumTroopsAlive,numEnrolled;
        int sizeOfTroops;
        country *Country;
        std::string name,phase;
};
#endif