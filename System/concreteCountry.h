//
// Created by DScho on 2022/10/15.
//

#ifndef OPTIMAL_CIRCUITRY_COS_214_PROJECT_CONCRETECOUNTRY_H
#define OPTIMAL_CIRCUITRY_COS_214_PROJECT_CONCRETECOUNTRY_H
#include "country.h"
#include "abstractMilitary.h"
#include "airforce.h"
#include "navy.h"
#include "army.h"
#include <iostream>
#include "concreteCountry.h"
#include "WaterTheater.h"
#include "AirTheater.h"
#include "LandTheater.h"
#include "WaterTransport.h"
#include "LandTransport.h"
#include "AirSpaceTransport.h"
#include "CountryLeaf.h"
#include "AllianceCountry.h"

#include <string>

using namespace std;

class concreteCountry : public country{
 friend class WarSystemFacade
private:
    int totalPersonnel;
    abstractMilitary** _airforce;
    abstractMilitary** _army;
    abstractMilitary** _navy;
    string _size;
    //Israel/Bandisa Add On
    int countrySize;
    int numOfTheaters; //number of theaters
    int TheaterSize; //size of each theater in relation to the country size
    concreteCountry *attackCountry;
    void addTheaterAndTransport();
    void invade(concreteCountry *_attackCountry);
    void invadeAir(concreteCountry *_attackCountry);
    void invadeLand(concreteCountry *_attackCountry);
    void invadeWater(concreteCountry *_attackCountry);
public:
    explicit concreteCountry(const string& name, const string& size);
    concreteCountry(string name,string& size, int navyPersonnell, int armyPersonnell, int airforcePersonnell);
    ~concreteCountry() override;

    string getName() override;
    int getTotalPersonnel() override;
    int getArmyPersonnel() override;
    int getNavyPersonnel() override;
    int getAirforcePersonnel() override;

    void setMilitaries(abstractMilitary* _air, abstractMilitary* _arm, abstractMilitary* _nav);

    void print() override;
    //Israel Add On
    void attackAir(concreteCountry* _attackCountry, int personnel);
    void attackSea(concreteCountry* _attackCountry, int personnel);
    void attackLand(concreteCountry* _attackCountry, int personnel);
    void attackRoads(country*);
    void sendReinforcements(string type, int count);
    void buildRoad(country*);
    void createAlliance(country*);
    void createEnemy(country*);
    void buildRoads(country*);
    
    Theater** getTheaters();
    ModesOfTransport **getModesOfTransport();
    int getTheaterSize();
    int getnumOfTheaters();
    void createMilitary();
    void transport(int,concreteCountry *_attackCountry);
    void transportAirForce(int,concreteCountry *_attackCountry);
    void transportArmy(int,concreteCountry *_attackCountry);
    void transportAir(int,concreteCountry *_attackCountry);
};


#endif //OPTIMAL_CIRCUITRY_COS_214_PROJECT_CONCRETECOUNTRY_H
