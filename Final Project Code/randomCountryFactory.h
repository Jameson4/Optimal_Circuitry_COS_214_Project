//
// Created by DScho on 2022/10/21.
//

#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_RANDOMCOUNTRYFACTORY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_RANDOMCOUNTRYFACTORY_H

#include "countryFactory.h"
#include <string>

using namespace std;

class randomCountryFactory : countryFactory{
public:
    virtual country* createCountry(string _name);
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_RANDOMCOUNTRYFACTORY_H
