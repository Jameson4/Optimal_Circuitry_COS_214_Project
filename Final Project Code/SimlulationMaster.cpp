#include "SimulationMaster.h"
#include <sstream>
//Ask mathew for the final Observer UML
//  SimulationMaster::SimulationMaster(Observer* sideA,Observer* sidB){
//     this->sideA=sideA;
//     this->sideB=sideB;
//     // for(int i=1;i<6;i++)
//     //     this->phases[i-1]="Phase "+i;
//  }
void SimulationMaster::notify(){
    for(int i=0;i<numSizeA;i++){
        for(int j=0;j<3;j++)
            sideA[i][j]->setPhase(phase);
    }
    for(int i=0;i<numSizeB;i++){
        for(int j=0;j<3;j++)
            sideA[i][j]->setPhase(phase);
    }
}
void SimulationMaster::reg(country *c,std::string side){
    if(side=="A"){
        for(int i=0;i<numSizeA;i++){
            if(SideACountries[i]==c){
                sideA[i]=SideACountries[i]->getHighRankingOfficers();
            }
        }
    }
    else
    if(side=="B"){
        for(int i=0;i<numSizeB;i++){
            if(SideBCountries[i]==c){
                sideB[i]=SideBCountries[i]->getHighRankingOfficers();
            }
        }
    }
}
void SimulationMaster::DeReg(country *c,std::string side){
    if(side=="A"){
        for(int i=0;i<numSizeA;i++){
            if(SideACountries[i]==c){
                sideA[i]=NULL;
            }
        }
    }
    else
    if(side=="B"){
        for(int i=0;i<numSizeB;i++){
            if(SideBCountries[i]==c){
                sideB[i]=NULL;
            }
        }
    }
}
void SimulationMaster::phaseChange(){
    //change phases according to sequence diagram
}
void SimulationMaster::addCountry(country*c, std::string side){
    int s;
    int i=0;
    if(side=="A")
        s=1;
    else
    if(side=="B")
        s=2;
    switch (s)
    {
        case 1:
            i=0;
            for(;i<numSizeA;i++){
                if(!SideACountries[i]){
                     SideACountries[i]=c;
                     break;
                }
            }
            if(i<numSizeA)
                sideA[i]=SideACountries[i]->getHighRankingOfficers();
            break;
        case 2:
            i=0;
            for(;i<numSizeB;i++){
                if(!SideBCountries[i]){
                     SideBCountries[i]=c;
                     break;
                }
            }
            if(i<numSizeB)
                sideB[i]=SideBCountries[i]->getHighRankingOfficers();
            break;
    }
}
SimulationMaster::SimulationMaster(int A,int B){
    numSizeA=A;
    numSizeB=B;
    stringstream s;
    for(int i=1;i<6;i++){   //intilising phase array
        s<<i;
        this->phases[i-1]="Phase "+s.str();
        s.clear();
    }
    SideACountries=new country*[numSizeA];
    SideBCountries=new country*[numSizeB];
    sideA=new Observer**[numSizeA];
    sideB=new Observer**[numSizeB];
    for(int i=0;i<numSizeA;i++){
        sideA[i]=new Observer*[3];
    }
    for(int i=0;i<numSizeB;i++){
        sideB[i]=new Observer*[3];
    }
}

Memento* SimulationMaster::createMemento() {
    Memento* mem = new Memento(0);
    mem->getState()->countriesA[n] = new country*[numSizeA];
    mem->getState()->numSizeA = numSizeA;
    mem->getState()->HighRankingOfficesA[n] = new Observer*[numSizeA];
    mem->getState()->_airforceA = new abstractMilitary*[numSizeA];
    mem->getState()->_armyA = new abstractMilitary*[numSizeA];
    mem->getState()->_navyA = new abstractMilitary*[numSizeA];
    
    for (int n = 0; n < numSizeA; n++) {
        mem->getState()->countriesA[n] = SideACountries[n];
        mem->getState()->HighRankingOfficesA[n] = SideACountries[n]->getAirforcePersonnel();

        /*still need getters 
        mem->getState()->_airforceA[n] = SideACountries[n]->getAirForce();
        mem->getState()->_armyA[n] = SideACountries[n]->getArmy();
        mem->getState()->_navyA[n] = SideACountries[n]->getNavy();
        */
    }

    mem->getState()->countriesB[n] = new country*[numSizeB];
    mem->getState()->numSizeB = numSizeB;
    mem->getState()->HighRankingOfficesB[n] = new Observer*[numSizeB];
    mem->getState()->_airforceB = new abstractMilitia*[numSizeB];
    mem->getState()->_armyB = new abstractMilitary*[numSizeB];
    mem->getState()->_navyB = new abstractMilitary*[numSizeB];

    for (int n = 0; n < numSizeB; n++) {
        mem->getState()->countriesB[n] = SideBCountries[n];
        mem->getState()->HighRankingOfficesB[n] = SideBCountries[n]->getAirforcePersonnel();

        /*still need getters 
        mem->getState()->_airforceB[n] = SideBCountries[n]->getAirForce();
        mem->getState()->_armyB[n] = SideBCountries[n]->getArmy();
        mem->getState()->_navyB[n] = SideBCountries[n]->getNavy();
        */
    }

    return mem;
}

void SimulationMaster::restore(Memento* mem) {
    SideACountries = new country*[mem->getState()->numSizeA];
    numSizeA = mem->getState()->numSizeA;
    for (int n = 0; n < numSizeA; n++) {
        SideACountries[n] = mem->getState()->countriesA[n];
        
        /*still need setters
        SideACountries[n]->setHighRankingOfficers(mem->getState()->HighRankingOfficesA[n]);
        SideACountries[n]->setArmy(mem->getState()->_armyA[n]);
        SideACountries[n]->setNavy(mem->getState()->_navyA[n]);
        SideACountries[n]->setAirforce(mem->getState()->_airforceA[n]);
        */
    }


    SideBCountries = new country*[mem->getState()->numSizeB];
    numSizeB = mem->getState()->numSizeB;
    for (int n = 0; n < numSizeB; n++) {
        SideBCountries[n] = mem->getState()->countriesB[n];
        
        /*still need setters
        SideBCountries[n]->setHighRankingOfficers(mem->getState()->HighRankingOfficesB[n]);
        SideBCountries[n]->setArmy(mem->getState()->_armyB[n]);
        SideBCountries[n]->setNavy(mem->getState()->_navyB[n]);
        SideBCountries[n]->setAirforce(mem->getState()->_airforceB[n]);
        */
    }

}