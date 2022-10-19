#include <iostream>
using namespace std;
#include "ConcreteSubject.h"
#include "BattleState.h"
#include "DefendState.h"
#include "AttackState.h"


int main(){
    ConcreteSubject* subject = new ConcreteSubject();
        string currentBattleState = subject->getBattleState();
        cout<<"Current State of battle is "<<currentBattleState<<endl;
        subject->change();
    delete subject;
    return 0; 
}