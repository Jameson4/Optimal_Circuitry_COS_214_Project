//
// Created by DScho on 2022/10/15.
//

#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_COUNTRY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_COUNTRY_H

#include <string>

using namespace std;

class country {
public:
    country();
    virtual ~country();

    virtual string getName() = 0;
    virtual void print() = 0;
protected:
    int navyPersonnell, armypersonnell, airforcepersonnell;
    string countryName;
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_COUNTRY_H
