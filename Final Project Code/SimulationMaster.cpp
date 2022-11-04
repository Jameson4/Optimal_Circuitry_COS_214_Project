#include "SimulationMaster.h"

//Ask mathew for the final Observer UML
 SimulationMaster::SimulationMaster(Observer* sideA,Observer* sidB){
    this->sideA=sideA;
    this->sideB=sideB;
    for(int i=1;i<6;i++)
        this->phases[i-1]="Phase "+i;
 }
void SimulationMaster::notify(){

}
void SimulationMaster::update(){

}
void SimulationMaster::reg(Observer *o){

}
void SimulationMaster::DeReg(Observer *o){

}
void SimulationMaster::phaseChange(){

}
void SimulationMaster::addCountry(country*c, std::string side){

}