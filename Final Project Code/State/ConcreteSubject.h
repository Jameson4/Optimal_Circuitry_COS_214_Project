#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

#include <iostream>
using namespace std; 
#include "BattleState.h"

class ConcreteSubject {
public:
    ConcreteSubject();
    ~ConcreteSubject();
    void change();
    string getBattleState();
    void setState(BattleState* state_);
private:
      BattleState* state;
};

#endif   