//
// Created by DScho on 2022/10/28.
//

#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_MILITARYFACTORY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_MILITARYFACTORY_H

#include "abstractMilitaryFactory.h"
#include "concreteCountry.h"
#include "airforce.h"
#include "navy.h"
#include "army.h"

class militaryFactory : public abstractMilitaryFactory{
private:
    abstractMilitary* _airforceTemp;
    abstractMilitary* _navyTemp;
    abstractMilitary* _armyTemp;
public:
    militaryFactory();
    void createMilitary(concreteCountry* _country) override;
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_MILITARYFACTORY_H
