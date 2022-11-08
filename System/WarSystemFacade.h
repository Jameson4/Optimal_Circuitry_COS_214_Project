/**
 * @brief warSystem facade class
  Unifies all the different classes participant in the war simulation for easier use
 * 
 * @class WarSystemfacade
 * @author Israel
 */
#ifndef _WarSystemFacade_
#define _WarSystemFacade_

#include <string>
#include "SimulationMaster.h"
#include "concreteCountry.h"
#include <iostream>

using namespace std;

class concreteCountry;
class WarSystemFacade {
    public:
    WarSystemFacade();
    concreteCountry* createCountry(string name, string size); 
    void addCountryToAlliance(concreteCountry *country);
    void attackAt(string where, concreteCountry* attackingCountry, concreteCountry* attackedCountry);
    void fullAttack(concreteCountry* attackingCountry, concreteCountry* attackedCountry);
    // void simulateWarSetSides(int a, int b);

    private:
    void createMilitary();
    void _addTheaterAndTransport();
    concreteCountry* _country; 
    SimulationMaster* _simulateWar; // phases of war
};

#endif 
