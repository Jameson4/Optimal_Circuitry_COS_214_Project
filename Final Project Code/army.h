//
// Created by DScho on 2022/10/28.
//

#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_ARMY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_ARMY_H

#include "abstractMilitary.h"

class army : public abstractMilitary {
public:
    army(int _personnel, string _type);
    void beingAttacked(int damage) override;
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_ARMY_H
