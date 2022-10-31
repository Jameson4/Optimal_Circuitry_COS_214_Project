#include <iostream>
#include <string>
#include <vector>
#include "Subject.h"
using namespace std;

bool Subject::attach(Observer* state) {
  observer.push_back(state);
  state->registerState(this); 
  return true;
};

bool Subject::detach(Observer* state) {
  bool found = false;

  vector<Observer*>::iterator it = observer.begin();
  while ((it != observer.end()) && (! found)) {
    if (*it == state) {
      found = true;
      observer.erase(it);
    }
    ++it;
  }
  return found;
}


void Subject::notify(){
  vector<Observer*>::iterator it = observer.begin();
  for (it = observer.begin(); it != observer.end(); ++it){
    (*it)->update();
  }
}