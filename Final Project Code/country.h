//
// Created by DScho on 2022/10/15.
//

#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_COUNTRY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_COUNTRY_H

#include <string>

using namespace std;

class country {
public:
    virtual ~country();
    virtual int getTotalPersonnel() = 0;
    virtual int getArmyPersonnel() = 0;
    virtual int getNavyPersonnel() = 0;
    virtual int getAirforcePersonnel() = 0;
    virtual string getName() = 0;
    virtual void print() = 0;
protected:
    int navyPersonnell, armyPersonnell, airforcePersonnell;
    string countryName, countrySize;
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_COUNTRY_H
