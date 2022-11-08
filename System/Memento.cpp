#include "Memento.h"
#include "State.h"
#include <iostream>
using namespace std;

/**
 * @brief Construct a new Memento:: Memento object
 * 
 * @param s 
 */
Memento::Memento(int i) {
    state_ = new State();
    state_->currentState = i;
}

Memento::~Memento() {
    delete state_;
}

/**
 * @brief returns stores internal state
 * 
 * @return State 
 */
State* Memento::getState() {
    cout<<"here";
    return state_;
}
