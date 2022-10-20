#include "SimulationMaster.h"

//Ask mathew for the final observer UML
 SimulationMaster::SimulationMaster(observer* sideA,observer* sidB){
    this->sideA=sideA;
    this->sideB=sideB;
    for(int i=1;i<6;i++)
        this->phases[i-1]="Phase "+i;
 }
void SimulationMaster::notify(){

}
void SimulationMaster::update(){

}
void SimulationMaster::reg(observer *o){

}
void SimulationMaster::DeReg(observer *o){

}
void SimulationMaster::phaseChange(){

}