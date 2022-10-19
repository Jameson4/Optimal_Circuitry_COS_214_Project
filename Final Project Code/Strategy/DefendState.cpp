#include <iostream>
using namespace std;
#include "DefendState.h"
#include "AttackState.h"

DefendState::DefendState(DecideStrat* strategy) {
    this->strategy = strategy;
}


void DefendState::handleChange(ConcreteSubject* c) {
    c->setState(new AttackState());
}

string DefendState::getBattleState() {
    return "County is currently in Attack Mode";
}

int DefendState::DefendStrat(int a, int b) {
    return strategy->execute(a, b);
}

DefendState::~DefendState() {
    cout << "Deleting strategy" << endl;
    delete strategy;
    strategy = 0;
}