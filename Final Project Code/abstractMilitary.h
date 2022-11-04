//
// Created by DScho on 2022/10/28.
//

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
