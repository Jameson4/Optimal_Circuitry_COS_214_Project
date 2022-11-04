/**
 * @brief Concrete military {airForce, navy, army} inherit from this abstract class 
 * 
 * @class abstractMilitary
 * @author Danie
 */
#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_ABSTRACTMILITARY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_ABSTRACTMILITARY_H

#include <iostream>
#include <string>
#include "country.h"
#include "abstractMilitary.h"

using namespace std;

class abstractMilitary {
public:
    int personnel, health, power;
    string type;
    virtual void beingAttacked(int damage) = 0;
    int getHealth();
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_ABSTRACTMILITARY_H
