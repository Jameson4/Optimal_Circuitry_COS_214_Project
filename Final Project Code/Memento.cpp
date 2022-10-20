#include "Memento.h"
#include "State.h"
using namespace std;


Memento::Memento(State s) {
    state_ = s;
}

State Memento::getState() {
    return state_;
}
