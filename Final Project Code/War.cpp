#include "War.h"
#include <iostream>
#include "State.h"
#include "Memento.h"
using namespace std;


War::War() {
    state_ = new State();
}

War::War(State s) {
    state_ = s;
}

void War::stop() {
    war = false;
    cout<<"War has stopped"<<endl;
}

void War::resume() {
    war = true;
    cout<<"War has resumed"<<endl;
}

Memento War::createMemento() {
    return new Memento(state_);
}

void War::restore(Memento mem) {
    state_ = mem.getState();
}

void War::step(string s) {
    cout<<s<<endl;
}