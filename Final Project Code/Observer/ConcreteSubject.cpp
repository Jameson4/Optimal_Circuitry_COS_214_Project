//This CPP serves at the context for state pattern
#include <iostream>
using namespace std;
#include "ConcreteSubject.h"
#include "Subject.h"


ConcreteSubject::ConcreteSubject() {
	cout << "Constructor 1 called" << endl;
    state = new AttackState();
}

ConcreteSubject::~ConcreteSubject() {
    cout << "Destructor called" << endl;
    delete state;
    state = NULL;
}


void ConcreteSubject::setState(BattleState* state_) {
    cout << "setState called" << endl;
    delete state;
    state = state_;
}

void ConcreteSubject::change() {
    state->handleChange(this);
}

string ConcreteSubject::getBattleState() {
    return state->getBattleState();
}
