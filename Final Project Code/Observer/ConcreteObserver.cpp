#include <iostream>
#include <string>
#include <vector>
#include "Observer.h"
#include "ConcreteObserver.h"
using namespace std;

void ConcreteObserver::currentState() {
    status=battleState.getBattleState();
    string CountrieName="France";


    cout << "Current state of " << CountrieName << " is " << status << endl;


  if (status == "currently in Attack State") 
  {
     /* code */
  } else if (status == "currently in Defence State")
  {
    /* code */
  }

}
