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
    //observers
    virtual void signUpToMilitary(Observer *o)=0;//sign up to one of 3 generals, per type
    virtual void report()=0;//report to the general
    virtual void getHighRankingOfficer()=0;//get generals
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_NAVY_H
