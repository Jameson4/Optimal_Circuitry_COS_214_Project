#ifndef STATE_H
#define STATE_H
#include <string>
#include <list>
using namespace std;

class country;
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
    country** countriesA;
    int numSizeA;
    Observer** HighRankingOfficesA;
    abstractMilitia*** _airforceA;
    abstractMilitia*** _navyA;
    abstractMilitia*** _armyA;

    country** countriesB;
    int numSizeB;
    Observer** HighRankingOfficesB;
    abstractMilitia*** _airforceB;
    abstractMilitia*** _navyB;
    abstractMilitia*** _armyB;
};

#endif