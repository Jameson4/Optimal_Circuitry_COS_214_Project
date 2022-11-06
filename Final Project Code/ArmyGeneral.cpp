#include "ArmyGeneral.h"

void ArmyGeneral::update(){
    int before =NumTroopsAlive;
    for(int i=0;i<sizeOfTroops;i++)
        if(troops[i] && troops[i]->getHealth()>0)
            NumTroopsAlive++;
    if(before!=NumTroopsAlive)
        report();
}
int ArmyGeneral::getNumTroopsAlive(){
    return NumTroopsAlive;
}
void ArmyGeneral::enrollTroop(abstractMilitary* t){
    if(numEnrolled<sizeOfTroops)
        troops[numEnrolled++]=t;
    else{
        //print error
    }
}
ArmyGeneral::ArmyGeneral(int s,country *c,std::string n){
        NumTroopsAlive=0;
        sizeOfTroops=s;
        Country=c;
        name=n;
        numEnrolled=0;
        troops=new abstractMilitary*[sizeOfTroops];
        for(int i=0;i<sizeOfTroops;i++)
            troops[i]=NULL;
}
void ArmyGeneral::setPhase(std::string p){
        phase=p;
}
int ArmyGeneral::getNumEnrolled(){
    return numEnrolled;
}
void ArmyGeneral::report(){
    mediator->notify();
}