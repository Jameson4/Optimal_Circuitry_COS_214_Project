#ifndef DEFENDSTATE_H
#define DEFENDSTATE_H

#include <iostream>
using namespace std;
#include "BattleState.h"
//#include "ConcreteSubject.h"
//#include "AttackState.h"

class DefendState : public BattleState {
  public:
    void handleChange(ConcreteSubject* c);
    string getBattleState();
};

#endif 