//
// Created by DScho on 2022/10/15.
//

#include <iostream>
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
    countrySize = size;
    srand(time(0));
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
}

concreteCountry::concreteCountry(string name, const string& size,  int _navyPersonnell, int _armyPersonnell, int _airforcePersonnell) {
    countryName = name;
    countrySize = size;
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


