/**
 * @brief abstract country factpr class 
 * 
 * @class countryFactory
 * @author Danie
 */
#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_COUNTRYFACTORY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_COUNTRYFACTORY_H

#include "country.h"
#include <string>

using namespace std;


class countryFactory {
public:
    virtual ~countryFactory();
    virtual country* createCountry() = 0;
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_COUNTRYFACTORY_H
