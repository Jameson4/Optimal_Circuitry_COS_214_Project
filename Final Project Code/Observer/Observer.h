#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Observer { 
  public:
    Observer();
    void registerState(Subject*);
    //void setCar(int);
    virtual void currentState() = 0;
  protected:
    Subject* val;
};



#endif