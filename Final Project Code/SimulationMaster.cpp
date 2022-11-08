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
            if(sideA && sideA[i] && sideA[i][j])
                sideA[i][j]->setPhase(phase);
    }
    for(int i=0;i<numSizeB;i++){
        for(int j=0;j<3;j++)
            if(sideB && sideA[i] && sideB[i][j])
                sideB[i][j]->setPhase(phase);
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
    bool change=false;
    int totalEnrolled=0;
    int totalAlive=0;
    for(int i=0;i<numSizeA;i++){
        for(int j=0;j<3;j++)
            if(sideA && sideA[i] && sideA[i][j]){
                totalEnrolled+=sideA[i][j]->getnumEnrolled();
                totalAlive+=sideA[i][j]->getNumTroopsAlive();
            }
    }
    checkEachSide(totalEnrolled,totalAlive,change);
    if(!change){ //if there was a significant change from one side's perspective, then there is no need to check the other.
        for(int i=0;i<numSizeB;i++){
            for(int j=0;j<3;j++)
                if(sideB && sideA[i] && sideB[i][j]){
                    totalEnrolled+=sideA[i][j]->getnumEnrolled();
                    totalAlive+=sideA[i][j]->getNumTroopsAlive();
                }
        }
    }
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
    phaseIndex=0;//always starts at phase 0;
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
void SimulationMaster::checkEachSide(int &totalEnrolled,int &totalAlive, bool &change){
    //check to see if there are significant changes in the war, from the perspective of one side, then all sides combined
    if(totalAlive/totalEnrolled*100<=10 && phaseIndex<3){
            change=true;    
            phase=phases[phaseIndex++];
            cout<<"War has entered "<<phase<<endl;
        }
        else
        if(totalAlive/totalEnrolled*100<=50 && phaseIndex==3){
            change=true;    
            phase=phases[phaseIndex++];
            cout<<"War has entered "<<phase<<endl;
        }
        else
        if(phaseIndex==4){
            change=true;    
            phase=phases[phaseIndex++];
            cout<<"Stablizing Society"<<endl;
        }
        else
        if(phaseIndex==5){
            change=true;    
            phase=phases[phaseIndex++];
            cout<<"Enabling Civil Activity"<<endl;
        }
}
//integreate composite pattern!