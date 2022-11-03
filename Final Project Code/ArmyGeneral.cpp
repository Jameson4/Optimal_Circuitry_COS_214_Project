#include "ArmyGeneral.h"

void ArmyGeneral::update(){
    for(int i=0;i<sizeOfTroops;i++)
        if(troops[i] && troops[i]->getHealth()>0)
            NumTroopsAlive++;
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
        NumTroopsAlive=n;
        sizeOfTroops=s;
        country=c;
        name=n;
        numEnrolled=0;
        troops=new abstractMilitary*[sizeOfTroops];
        for(int i=0;i<sizeOfTroops;i++)
            troops[i]=NULL;
}