#ifndef BATTLESTATE_H
#define BATTLESTATE_H

#include <iostream>
using namespace std;
//#include "ConcreteSubject.h"

class ConcreteSubject;

class BattleState {
  public:
    virtual void handleChange(ConcreteSubject* c)=0;
    virtual string getBattleState () = 0;
    virtual ~BattleState();
    void set_context(ConcreteSubject *context);
    
  protected:
    ConcreteSubject* context;
    ConcreteSubject* context_;
};
#endif