#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

#include <iostream>
#include <string>
#include <vector>
#include "Observer.h"


using namespace std;

class ConcreteObserver : public Observer {
  public:
    virtual void currentState(); 
  private:
    ConcreteSubject* battleState;
    BattleState* observerState;
    string status;
};



#endif