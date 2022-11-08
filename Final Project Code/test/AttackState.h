#ifndef ATTACKSTATE_H
#define ATTACKSTATE_H

#include <iostream>
using namespace std;
//#include "BattleState.h"
//#include "ConcreteSubject.h"
//#include "DefendState.h"

class AttackState : public BattleState {
  public:
    AttackState(DecideStrat* strategy);
    ~AttackState();
    void handleChange(ConcreteSubject* c);
    string getBattleState();
    int AttackStrat(int a, int b);

    private:
    DecideStrat* strategy;
};

#endif