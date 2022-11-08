//
// Created by DScho on 2022/10/28.
//

#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_ABSTRACTMILITARY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_ABSTRACTMILITARY_H

#include <iostream>
#include <string>
#include "country.h"
#include "Observer.h"
using namespace std;
class country;
class abstractMilitary {
public:
    int personnel, health, power;
    string type;
    virtual void beingAttacked(int damage) = 0;
    int getHealth();
    virtual ~abstractMilitary();
    virtual void attack(abstractMilitary * attacked)=0;
    country* getCountry();
    
    //observers for each troops
    virtual void signUpToMilitary(Observer *o)=0;//sign up to one of 3 generals, per type
    virtual void report()=0;//report to the general
    virtual Observer* getHighRankingOfficer()=0;//get generals
    protected:
        country* Country;
        Observer* HighRankingOfficer;
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_ABSTRACTMILITARY_H
