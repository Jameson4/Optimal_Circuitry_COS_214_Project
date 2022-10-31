//
// Created by DScho on 2022/10/15.
//

#include <iostream>
#include "concreteCountry.h"
#include "WaterTheater.h"
#include "AirTheater.h"
#include "LandTheater.h"
#include "WaterTransport.h"
#include "LandTransport.h"
#include "AirSpaceTransport.h"
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
    countrySize = size;
    if(countrySize == "small"){
        navyPersonnell = rand()%(50000-35000+1)+35000;
        armyPersonnell = rand()%(50000-35000+1)+35000;
        airforcePersonnell = rand()%(50000-35000+1)+35000;
    }else if(countrySize == "medium"){
        navyPersonnell = rand()%(175000-100000+1)+100000;
        armyPersonnell = rand()%(175000-100000+1)+100000;
        airforcePersonnell = rand()%(175000-100000+1)+100000;
    }else if(countrySize == "large"){
        navyPersonnell = rand()%(300000-220000+1)+220000;
        armyPersonnell = rand()%(300000-220000+1)+220000;
        airforcePersonnell = rand()%(300000-220000+1)+220000;
    }
    totalPersonnel = navyPersonnell + armyPersonnell + airforcePersonnell;
    addTheaterAndTransport();
}

concreteCountry::concreteCountry(string name, const string& size,  int _navyPersonnell, int _armyPersonnell, int _airforcePersonnell) {
    countryName = name;
    countrySize = size;
    navyPersonnell = _navyPersonnell;
    armyPersonnell = _armyPersonnell;
    airforcePersonnell = _airforcePersonnell;
    totalPersonnel = navyPersonnell + armyPersonnell + airforcePersonnell;
    addTheaterAndTransport();
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

void concreteCountry::addTheaterAndTransport(){
    //Bandisa
    numOfTheaters=0.135*totalPersonnel;
    TheaterSize=0.413*totalPersonnel;
    Theaters = new Theater*[numOfTheaters];
    Transports= new ModesOfTransport*[numOfTheaters];
        //creating different theater types
        //creating different transport types and linking it to the country and corresponding theater
    for(int i=0;i<numOfTheaters;i++){
        if(i%2==0){
            Theaters[i]=new LandTheater(this,TheaterSize);
            Transports[i]=new LandTransport(this,Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
        }
        else
        if(i%3==0){
            Theaters[i]=new AirTheater(this,TheaterSize);
            Transports[i]=new AirSpaceTransport(this,Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
        }
        else{
            Theaters[i]=new WaterTheater(this,TheaterSize);
            Transports[i]=new WaterTransport(this,Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
        }
        if(i>0){
            Theaters[i-1]->add(Theaters[i]); //creating chain for chain of command
        }
    }
}

