//
// Created by DScho on 2022/10/15.
//

#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_COUNTRYFACTORY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_COUNTRYFACTORY_H

#include <string>

using namespace std;


class countryFactory {
private:
    int personnel;
    bool navy,airforce,army;
public:
    string name;
    countryFactory();
    void attackAir();
    void attackSea();
    void attackLand();
    void createAlliance(*country);
    void createEnemy(*country);
    void buildRoads(*country);
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_COUNTRYFACTORY_H
