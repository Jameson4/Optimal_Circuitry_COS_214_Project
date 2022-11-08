#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

#include "Subject.h"
#include "ConcreteObserver.h"
#include <iostream>
using namespace std; 

class ConcreteSubject: public Subject {
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