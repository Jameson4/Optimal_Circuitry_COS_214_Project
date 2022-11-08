#ifndef ATTACKSTATE_H
#define ATTACKSTATE_H

#include <iostream>
using namespace std;
#include "BattleState.h"
#include "ConcreteSubject.h"
#include "DefendState.h"

class AttackState : public BattleState {
  public:
    void handleChange(ConcreteSubject* c);
    string getBattleState();
};


#endif