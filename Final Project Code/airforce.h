//
// Created by DScho on 2022/10/28.
//

#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_AIRFORCE_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_AIRFORCE_H

#include <String>
#include "abstractMilitary.h"
#include "country.h"

class airforce : public abstractMilitary{
public:
    airforce(int _personnel, string _type);
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_AIRFORCE_H
