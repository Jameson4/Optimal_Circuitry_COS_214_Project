#include <iostream>
using namespace std;
#include "AttackState.h"

AttackState::AttackState(DecideStrat* strategy) {
    this->strategy = strategy;
}


void AttackState::handleChange(ConcreteSubject* c) {
    c->setState(new DefendState());
}

string AttackState::getBattleState() {
    return "County is currently in Defensive Mode ";
}


int AttackState::AttackStrat(int a, int b) {
    return strategy->execute(a, b);
}

AttackState::~AttackState() {
    cout << "Deleting strategy" << endl;
    delete strategy;
    strategy = 0;
}
