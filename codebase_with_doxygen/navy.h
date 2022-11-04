/**
 * @brief navy military class 
 * 
 * @class navy
 * @author Danie
 */
#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_NAVY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_NAVY_H

#include <String>
#include "abstractMilitary.h"

class navy : public abstractMilitary {
public:
    navy(int _personnel, string _type);
    void beingAttacked(int damage) override;
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_NAVY_H
