#include <iostream>
using namespace std;
#include "DefendState.h"
#include "AttackState.h"


void DefendState::handleChange(ConcreteSubject* c) {
    c->setState(new AttackState());
}

string DefendState::getBattleState() {
    return "currently in Defence State";
}