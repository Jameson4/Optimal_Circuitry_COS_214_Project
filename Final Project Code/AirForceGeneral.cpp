#include "AirForceGeneral.h"

void AirForceGeneral::update(){
    int before =NumTroopsAlive;
    for(int i=0;i<sizeOfTroops;i++)
        if(troops[i] && troops[i]->getHealth()>0)
            NumTroopsAlive++;
    if(before!=NumTroopsAlive)
        report();
}
int AirForceGeneral::getNumTroopsAlive(){
    return NumTroopsAlive;
}
void AirForceGeneral::enrollTroop(abstractMilitary* t){
    if(numEnrolled<sizeOfTroops)
        troops[numEnrolled++]=t;
    else{
        //print error
    }
}
AirForceGeneral::AirForceGeneral(int s,country *c,std::string n){
        NumTroopsAlive=n;
        sizeOfTroops=s;
        country=c;
        name=n;
        numEnrolled=0;
        troops=new abstractMilitary*[sizeOfTroops];
        for(int i=0;i<sizeOfTroops;i++)
            troops[i]=NULL;
}
void AirForceGeneral::setPhase(std::string p){
        phase=p;
}
int AirForceGeneral::getNumEnrolled(){
    return numEnrolled;
}
void AirForceGeneral::report(){
    mediator->notify();
}