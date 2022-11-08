#include "War.h"
#include <iostream>
#include "State.h"
#include "Memento.h"
#include "SimulationMaster.h"
using namespace std;

War::War() {
    simMas = new SimulationMaster(10,10);
    state_ = new State();
}
War::War(SimulationMaster* sim) {
    simMas = sim;
    state_ = new State();
    
}

War::War(State s) {
    *state_ = s;
}

void War::stop() {
    war = false;
    cout<<"War has stopped"<<endl;
    
}

Memento* War::resume() {
    war = true;
    cout<<"War has resumed"<<endl;
    return createMemento();
}

Memento* War::createMemento() {
    return simMas->createMemento();
}

void War::restore(Memento* mem) {
    simMas->restore(mem);
}

void War::step() {
    cout<<"Current State: "<<++state_->currentState<<endl;
}

State* War::getState() {
    return state_;
}

