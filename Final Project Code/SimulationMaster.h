#ifndef SimulationMaster_h
#define SimulationMaster_h
#include "Mediator.h"
#include <string>
class SimulationMaster:public Mediator{
    private:
        observer* sideA;
        observer* sideB;
        std::string phases[6];
    public:
        SimulationMaster(observer* sideA,observer* sidB);
        void notify();
        void update();
        void reg(observer *o);
        void DeReg(observer *o);
        void phaseChange();
};
#endif