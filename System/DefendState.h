#ifndef DEFENDSTATE_H
#define DEFENDSTATE_H

#include <iostream>
using namespace std;
#include "BattleState.h"
//#include "ConcreteSubject.h"
//#include "AttackState.h"

class DefendState : public BattleState {
  public:
    DefendState(DecideStrat* strategy);
    ~DefendState();
    void handleChange(ConcreteSubject* c);
    string getBattleState();
    int DefendStrat(int a, int b);

    private:
    DecideStrat* strategy;
};

#endif 