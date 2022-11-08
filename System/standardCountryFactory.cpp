//
// Created by DScho on 2022/10/21.
//

#include "standardCountryFactory.h"
#include "concreteCountry.h"

country* standardCountryFactory::createCountry(string _name, string _size, int _navyPersonnell, int _armyPersonnell, int _airforcePersonnell) {
    country* retCountry = new concreteCountry(_name, _size,_navyPersonnell,_armyPersonnell,_airforcePersonnell);
    return retCountry;
}
