/**
 * @brief standardCountryFactory class
 * Inherits from the CountryFactory class to create countries
 * 
 * @class standardCountryFactory
 * @author Danie
 */
#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_STANDARDCOUNTRYFACTORY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_STANDARDCOUNTRYFACTORY_H

#include "countryFactory.h"
#include <string>

using namespace std;

class standardCountryFactory : countryFactory{
public:
    virtual country* createCountry(string _name, string _size,int _navyPersonnell, int _armyPersonnell, int _airforcePersonnell);
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_STANDARDCOUNTRYFACTORY_H
