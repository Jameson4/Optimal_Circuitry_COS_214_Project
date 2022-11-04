#include "NavyGeneral.h"

void NavyGeneral::update(){
    int before =NumTroopsAlive;
    for(int i=0;i<sizeOfTroops;i++)
        if(troops[i] && troops[i]->getHealth()>0)
            NumTroopsAlive++;
    if(before!=NumTroopsAlive)
        report();
}
int NavyGeneral::getNumTroopsAlive(){
    return NumTroopsAlive;
}
void NavyGeneral::enrollTroop(abstractMilitary* t){
    if(numEnrolled<sizeOfTroops)
        troops[numEnrolled++]=t;
    else{
        //print error
    }
}
NavyGeneral::NavyGeneral(int s,country *c,std::string name){
        NumTroopsAlive=0;
        sizeOfTroops=s;
        country=c;
        this->name=name;
        numEnrolled=0;
        troops=new abstractMilitary*[sizeOfTroops];
        for(int i=0;i<sizeOfTroops;i++)
            troops[i]=NULL;
}
void NavyGeneral::setPhase(std::string p){
        phase=p;
}
int NavyGeneral::getNumEnrolled(){
    return numEnrolled;
}
void NavyGeneral::report(){
    mediator->notify();
}