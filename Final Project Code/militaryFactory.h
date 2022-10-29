//
// Created by DScho on 2022/10/28.
//

#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_MILITARYFACTORY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_MILITARYFACTORY_H

#include "abstractMilitaryFactory.h"
#include "airforce.h"
#include "navy.h"
#include "army.h"

class militaryFactory : public abstractMilitaryFactory{
private:
    airforce* _airforce;
    navy* _navy;
    army* _army;
public:
    militaryFactory();
    void createMilitary(country* _country) override;
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_MILITARYFACTORY_H
