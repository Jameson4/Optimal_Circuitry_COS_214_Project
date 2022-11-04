#include "standardCountryFactory.h"
#include "concreteCountry.h"

///@author Danie
///

/**
 * @brief create country
 * @param _name name of country
 * @param _size size of country
 * @param _navyPersonnell navy personnel
 * @param _armyPersonnell army personnel
 * @param _airforcePersonnell airforce personnel
 */
country* standardCountryFactory::createCountry(string _name, string _size, int _navyPersonnell, int _armyPersonnell, int _airforcePersonnell) {
    country* retCountry = new concreteCountry(_name, _size,_navyPersonnell,_armyPersonnell,_airforcePersonnell);
    return retCountry;
}
