#include <iostream>
using namespace std;
#include "BattleState.h"

//class State;??

BattleState::~BattleState() {
    cout << "BattleState Destructor called" << endl; 
}

void BattleState::set_context(ConcreteSubject *context) {
    this->context_ = context;
  }