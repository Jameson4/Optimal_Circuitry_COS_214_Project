#include "War.h"
#include <iostream>
#include "State.h"
#include "Memento.h"
using namespace std;


War::War() {
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
    return new Memento(state_->currentState);
}

void War::restore(Memento* mem) {
    state_ = mem->state_;
}

void War::step() {
    cout<<"Current State: "<<++state_->currentState<<endl;
}

State* War::getState() {
    return state_;
}
