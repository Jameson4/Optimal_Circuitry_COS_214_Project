//
// Created by DScho on 2022/10/15.
//

#include "concreteCountry.h"
using namespace std;

concreteCountry::~concreteCountry() {

}

string concreteCountry::getName() {
    return countryName;
}

void concreteCountry::print() {

}

concreteCountry::concreteCountry(const string& name, const string& size) {
    cout<<"Welcome " + name + " to the war!\n";
    countryName = name;
    _size = size;
    if(_size == "small"){
        navyPersonnell = rand()%(50000-35000+1)+35000;
        armyPersonnell = rand()%(50000-35000+1)+35000;
        airforcePersonnell = rand()%(50000-35000+1)+35000;
    }else if(_size == "medium"){
        navyPersonnell = rand()%(175000-100000+1)+100000;
        armyPersonnell = rand()%(175000-100000+1)+100000;
        airforcePersonnell = rand()%(175000-100000+1)+100000;
    }else if(_size == "large"){
        navyPersonnell = rand()%(300000-220000+1)+220000;
        armyPersonnell = rand()%(300000-220000+1)+220000;
        airforcePersonnell = rand()%(300000-220000+1)+220000;
    }
    totalPersonnel = navyPersonnell + armyPersonnell + airforcePersonnell;
}

concreteCountry::concreteCountry(string name, const string& size,  int _navyPersonnell, int _armyPersonnell, int _airforcePersonnell) {
    countryName = name;
    _size = size;
    navyPersonnell = _navyPersonnell;
    armyPersonnell = _armyPersonnell;
    airforcePersonnell = _airforcePersonnell;
    totalPersonnel = navyPersonnell + armyPersonnell + airforcePersonnell;
}

int concreteCountry::getTotalPersonnel() {
    return totalPersonnel;
}

int concreteCountry::getArmyPersonnel() {
    return this->armyPersonnell;
}

int concreteCountry::getNavyPersonnel() {
    return this->navyPersonnell;
}

int concreteCountry::getAirforcePersonnel() {
    return this->airforcePersonnell;
}

void concreteCountry::setMilitaries(abstractMilitary* _air, abstractMilitary* _arm, abstractMilitary* _nav) {
    _airforce = _air;
    _army = _arm;
    _navy = _nav;
}

//Bandisa Add On
void concreteCountry::addTheaterAndTransport() {
    //Bandisa
    numOfTheaters = 0.135 * totalPersonnel;
    TheaterSize = 0.413 * totalPersonnel;
    Theaters = new Theater *[numOfTheaters];
    Transports = new ModesOfTransport *[numOfTheaters];
    //creating different theater types
    //creating different transport types and linking it to the country and corresponding theater
    for (int i = 0; i < numOfTheaters; i++) {
        if (i % 2 == 0 && i % 3!=0) {
            Theaters[i] = new LandTheater(this, TheaterSize);
            Transports[i] = new LandTransport(this, Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
        } else if (i % 3 == 0) {
            Theaters[i] = new AirTheater(this, TheaterSize);
            Transports[i] = new AirSpaceTransport(this, Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
        } else {
            Theaters[i] = new WaterTheater(this, TheaterSize);
            Transports[i] = new WaterTransport(this, Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
        }
        if (i > 0) {
            Theaters[i - 1]->add(Theaters[i]); //creating chain for chain of command
        }
    }
}

void concreteCountry::attackAir(concreteCountry *_attackCountry, int personnel) {
    // _attackCountry->_airforce->beingAttacked(this->_airforce->power);
    // cout<<this->getName() + " dealt " + to_string(personnel) + " damage to " + _attackCountry->getName() + "'s Airforce";
    
    //Bandisa
    invadeAir(_attackCountry);
}

void concreteCountry::attackSea(concreteCountry *_attackCountry, int personnel) {
    // _attackCountry->_navy->beingAttacked(this->_navy->power);
    // cout<<this->getName() + " dealt " + to_string(personnel) + " damage to " + _attackCountry->getName() + "'s Navy";
    
    //Bandisa
    invadeWater(_attackCountry);
}

void concreteCountry::attackLand(concreteCountry *_attackCountry, int personnel) {
    // _attackCountry->_army->beingAttacked(this->_army->power);
    // cout<<this->getName() + " dealt " + to_string(personnel) + " damage to " + _attackCountry->getName() + "'s Army";

    //Bandisa
    invadeLand(_attackCountry);
}

void concreteCountry::invade(concreteCountry *_attackCountry){
//full invasion
//neeed to link attacking country's theater and modes of transport to the countyry that is being attacked
//this is attacking, _attackCountry is being attacked
    //this->Theaters=_attackCountry->getTheaters(); //attacking country can now access the attacked countries theaters
    Theaters= new Theater *[_attackCountry->getnumOfTheaters()];
    Transports=new ModesOfTransport*[_attackCountry->getnumOfTheaters()];
    for(int i=0;i<_attackCountry->getnumOfTheaters() && i<numOfTheaters;i++){
        if (i % 2 == 0 && i % 3!=0) {
            //remember to delete previous theater
            Theaters[i] = _attackCountry->getTheaters()[i];
            Transports[i] = new LandTransport(this, Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
        } else if (i % 3 == 0) {
            Theaters[i] = _attackCountry->getTheaters()[i];
            Transports[i] = new AirSpaceTransport(this, Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
        } else {
            Theaters[i] = _attackCountry->getTheaters()[i];
            Transports[i] = new WaterTransport(this, Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
        }
        if (i > 0) {
            //Theaters[i - 1]->remove(Theaters[i]);//remove older theater links
            Theaters[i - 1]->add(Theaters[i]); //creating chain for chain of command
        }
    }
}

void concreteCountry::invadeAir(concreteCountry *_attackCountry){
//invade via air
    for(int i=0;i<_attackCountry->getnumOfTheaters() && i<numOfTheaters;i++){
        if (i % 3 == 0 && i%2 !=0) {
            //remember to delete previous theater
            Theaters[i] = _attackCountry->getTheaters()[i];
            Transports[i] = new AirSpaceTransport(this, Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
            if (i > 0) {
                //Theaters[i - 1]->remove(Theaters[i]);//remove older theater links
                Theaters[i - 1]->add(Theaters[i]); //creating chain for chain of command
            }
        } 
    }
}
void concreteCountry::invadeLand(concreteCountry *_attackCountry){
//invade via land    
    for(int i=0;i<_attackCountry->getnumOfTheaters() && i<numOfTheaters;i++){
        if (i % 2 == 0 && i%3!=0) {
            //remember to delete previous theater
            Theaters[i] = _attackCountry->getTheaters()[i];
            Transports[i] = new LandTransport(this, Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
            if (i > 0) {
                //Theaters[i - 1]->remove(Theaters[i]);//remove older theater links
                Theaters[i - 1]->add(Theaters[i]); //creating chain for chain of command
            }
        } 
    }
}
void concreteCountry::invadeWater(concreteCountry *_attackCountry){
//invade via water    
    for(int i=0;i<_attackCountry->getnumOfTheaters() && i<numOfTheaters;i++){
        if (i % 2 != 0  && i%3!=0) {
            //remember to delete previous theater
            Theaters[i] = _attackCountry->getTheaters()[i];
            Transports[i] = new WaterTransport(this, Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
            if (i > 0) {
                // Theaters[i - 1]->remove(Theaters[i]);//remove older theater links
                Theaters[i - 1]->add(Theaters[i]); //creating chain for chain of command
            }
        } 
    }
}

Theater** concreteCountry::getTheaters(){
    return Theaters;
}
ModesOfTransport **concreteCountry::getModesOfTransport(){
    return Transports;
}  
int concreteCountry::getTheaterSize(){
    return TheaterSize;
}
int concreteCountry::getnumOfTheaters(){
    return numOfTheaters;
}


