/**
 * @brief abstract Military Factory to manufacture {AirForce, navy or army}
 * 
 * @class abstractMilitaryFactory
 * @author Danie
 */
#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_ABSTRACTMILITARYFACTORY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_ABSTRACTMILITARYFACTORY_H

#include <vector>
#include "abstractMilitary.h"
#include "concreteCountry.h"
#include "country.h"

using namespace std;

class abstractMilitaryFactory {
public:
    virtual void createMilitary(concreteCountry* _country) = 0;
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_ABSTRACTMILITARYFACTORY_H
