#ifndef SimulationMaster_h
#define SimulationMaster_h
//#include "Mediator.h"
#include "country.h"
#include "Memento.h"
#include "State.h"
#include <string>
class Mesiator;
class country;
class SimulationMaster:public Mediator{
    private:
        Observer*** sideA;//sidA[i] referes to country i, sideA[i][j] with j:0->2, refers to the Generals of the country
        Observer*** sideB;
        std::string phase,phases[6];
        country **SideACountries;
        country **SideBCountries;
        int numSizeA,numSizeB;
    public:
        void notify();
        void reg(country *c,std::string side);
        void DeReg(country *c,std::string side);
        void phaseChange();
        void addCountry(country*c, std::string side);
        SimulationMaster(int A,int B);
        Memento* createMemento();
        void restore(Memento*);

};
#endif