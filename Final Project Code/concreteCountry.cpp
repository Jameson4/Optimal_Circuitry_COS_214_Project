//
// Created by DScho on 2022/10/15.
//

#include "concreteCountry.h"

string concreteCountry::getName() {
    return country::getName();
}

void concreteCountry::print() {
    country::print();
}

concreteCountry::concreteCountry(const string& name, const string& size) {
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
}

concreteCountry::concreteCountry(string name, const string& size,  int _navyPersonnell, int _armyPersonnell, int _airforcePersonnell) {
    countryName = name;
    countrySize = size;
    navyPersonnell = _navyPersonnell;
    armyPersonnell = _armyPersonnell;
    airforcePersonnell = _airforcePersonnell;
}
