#ifndef SimulationMaster_h
#define SimulationMaster_h
#include "Mediator.h"
#include "country.h"
#include <string>
class SimulationMaster:public Mediator{
    private:
        Observer** sideA;
        Observer** sideB;
        std::string phases[6];
        country **SideACountries;
        country **SideBCountries;
    public:
        SimulationMaster(Observer* sideA,Observer* sidB);
        void notify();
        void reg(Observer *o);
        void DeReg(Observer *o);
        void phaseChange();
        void addCountry(country*c, std::string side);
};
#endif