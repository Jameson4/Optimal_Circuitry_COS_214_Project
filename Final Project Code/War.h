#ifndef WAR_H
#define WAR_H
#include "State.h"
#include "Memento.h"
#include "SimulationMaster.h"
#include <string>
using namespace std;

///just a placeholder
class War {
    friend class Memento;
    private:
        bool war;
        State* state_;
        SimulationMaster* simMas;
    public:
        War();
        War(SimulationMaster*);
        War(State);
        ~War() {delete state_;}
        void stop();
        Memento* resume();
        Memento* createMemento();
        void restore(Memento*);
        void step();
        State* getState();
};

#endif

