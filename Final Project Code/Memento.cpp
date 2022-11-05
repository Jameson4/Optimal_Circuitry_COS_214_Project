#include "Memento.h"
#include "State.h"
using namespace std;


/**
 * @brief Construct a new Memento:: Memento object
 * 
 * @param s 
 */
Memento::Memento(State s) {
    state_ = s;
}

/**
 * @brief returns stores internal state
 * 
 * @return State 
 */
State Memento::getState() {
    return state_;
}
