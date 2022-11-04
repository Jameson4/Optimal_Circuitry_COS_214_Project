#include "SimulationMaster.h"

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
    if(side=="A")
        s=1;
    else
    if(side=="B")
        s=2;
    switch (s)
    {
    case 1:
        int i=0;
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
        int i=0;
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