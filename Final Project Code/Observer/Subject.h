#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Subject { // Subject
  public:
    bool attach(Observer*);   // register
    bool detach(Observer*);   // deregister
    void notify();
    virtual void change() = 0;
    virtual bool setState(BattleState*) = 0;
    virtual string getBattleState() = 0;
  private:
    vector<Observer*> observer; 
};


#endif