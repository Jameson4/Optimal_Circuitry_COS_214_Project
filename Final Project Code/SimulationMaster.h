#ifndef SimulationMaster_h
#define SimulationMaster_h
#include "Mediator.h"
#include "country.h"
#include <string>
class SimulationMaster:public Mediator{
    private:
        Observer*** sideA;//sidA[i] referes to country i, sideA[i][j] with j:0->2, refers to the Generals of the country
        Observer*** sideB;
        const std::string phase,phases[6]={"Phase 0","Phase 1","Phase 2","Phase 3","Phase 4","Phase 5"};
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
};
#endif