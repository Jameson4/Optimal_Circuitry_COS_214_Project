#ifndef STATE_H
#define STATE_H
#include <string>
#include <list>
using namespace std;

class Country;
class Observer;
class abstractMilitia;
/**
 * @brief holds state imformation from War
 * 
 */
class State {
    public:
    State() {currentState =0;}
    int currentState;
    list<Country*> countries;
    list<Observer*> HighRankingOffices;
    list<abstractMilitia*> _airforce;
    list<abstractMilitia*> _navy;
    list<abstractMilitia*> _army;
    
    
};

#endif
