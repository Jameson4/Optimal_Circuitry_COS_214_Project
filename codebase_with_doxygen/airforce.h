/**
 * @brief airForce military class 
 * 
 * @class airforce
 * @author Danie
 */
#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_AIRFORCE_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_AIRFORCE_H

#include <String>
#include "abstractMilitary.h"
#include "country.h"
#include <iostream>

using namespace std;

class airforce : public abstractMilitary{
public:
    airforce(int _personnel, string _type);
    void beingAttacked(int damage) override;
};

#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_AIRFORCE_H
