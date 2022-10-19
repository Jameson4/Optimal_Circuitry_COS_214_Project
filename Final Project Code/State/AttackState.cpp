#include <iostream>
using namespace std;
#include "AttackState.h"


void AttackState::handleChange(ConcreteSubject* c) {
    c->setState(new DefendState());
}

string AttackState::getBattleState() {
    return "County is currently in Defensive Mode ";
}