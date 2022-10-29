//
// Created by DScho on 2022/10/15.
//

#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_CONCRETECOUNTRY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_CONCRETECOUNTRY_H
#include "country.h"

#include <string>

using namespace std;

class concreteCountry : public country{
private:
    int totalPersonnel = 0;
public:
    explicit concreteCountry(const string& name, const string& size);
    concreteCountry(string name, const string& size, int navyPersonnell, int armyPersonnell, int airforcePersonnell);
    ~concreteCountry() override;

    string getName() override;
    int getTotalPersonnel() override;
    int getArmyPersonnel() override;
    int getNavyPersonnel() override;
    int getAirforcePersonnel() override;

    void print() override;
    void attackAir(int personnel);
    void attackSea(int personnel);
    void attackLand(int personnel);
    void attackRoads(country*);
    void sendReinforcements(string type, int count);
    void buildRoad(country*);
    void createAlliance(country*);
    void createEnemy(country*);
    void buildRoads(country*);
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_CONCRETECOUNTRY_H
