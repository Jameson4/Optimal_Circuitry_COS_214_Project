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

concreteCountry::concreteCountry(string name) {
    countryName = name;
    //navyPersonnell = Random value
    //armyPersonnell = Random value
    //airforcePersonnell = Random value
}

concreteCountry::concreteCountry(string name, int _navyPersonnell, int _armyPersonnell, int _airforcePersonnell) {
    countryName = name;
    navyPersonnell = _navyPersonnell;
    armypersonnell = _armyPersonnell;
    airforcepersonnell = _airforcePersonnell;
}
