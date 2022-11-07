//
// Created by DScho on 2022/10/28.
//

#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_NAVY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_NAVY_H

#include <string>
#include "abstractMilitary.h"

class navy : public abstractMilitary {
public:
    navy(int _personnel, string _type);
    void beingAttacked(int damage) override;
    void attack(abstractMilitary * attacked);
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_NAVY_H
