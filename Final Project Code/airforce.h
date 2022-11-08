//
// Created by DScho on 2022/10/28.
//

#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_AIRFORCE_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_AIRFORCE_H

#include <string>
#include "abstractMilitary.h"
#include "country.h"
#include <iostream>

using namespace std;

class airforce : public abstractMilitary{
    public:
        airforce(int _personnel, string _type);
        void beingAttacked(int damage) override;
        void attack(abstractMilitary * attacked);    
        //observers
       void signUpToMilitary(Observer *o);//sign up to one of 3 generals, per type
       void report();//report to the general
       Observer* getHighRankingOfficer();//get generals
};

#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_AIRFORCE_H
