#ifndef STATE_H
#define STATE_H
#include <list>
#include "CountryState.h"
using namespace std;


/**
 * @brief holds state imformation from War
 * 
 */
class State {
    public:
    int currentState;
    State() {currentState =0;}
    list<CountryState*> countries;
};

#endif
