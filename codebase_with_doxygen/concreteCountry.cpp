#include "concreteCountry.h"
using namespace std;

/// @author Danie
///

/**
 * @brief destructor
 */
concreteCountry::~concreteCountry() {

}

/**
 * @brief return the name of this country
 * @return name of country
 */
string concreteCountry::getName() {
    return countryName;
}

void concreteCountry::print() {

}


/**
 * @brief constructor
 *  instantiates country object
 * @param name  name of country
 * @param size  size of country small, medium or large
 */
concreteCountry::concreteCountry(const string& name, const string& size) {
    cout<<"Welcome " + name + " to the war!\n";
    countryName = name;
    _size = size;
    if(_size == "small"){
        navyPersonnell = rand()%(50000-35000+1)+35000;
        armyPersonnell = rand()%(50000-35000+1)+35000;
        airforcePersonnell = rand()%(50000-35000+1)+35000;
    }else if(_size == "medium"){
        navyPersonnell = rand()%(175000-100000+1)+100000;
        armyPersonnell = rand()%(175000-100000+1)+100000;
        airforcePersonnell = rand()%(175000-100000+1)+100000;
    }else if(_size == "large"){
        navyPersonnell = rand()%(300000-220000+1)+220000;
        armyPersonnell = rand()%(300000-220000+1)+220000;
        airforcePersonnell = rand()%(300000-220000+1)+220000;
    }
    totalPersonnel = navyPersonnell + armyPersonnell + airforcePersonnell;
}

/**
 * @brief constructor
 *  instantiates country object
 * @param name  name of country
 * @param size  size of country: small, medium or large
 * @param _navyPersonnell size of navy personnel
 * @param _armyPersonnell size of army pernnel
 * @param _airforcePersonnell size of airforce personnel
 */
concreteCountry::concreteCountry(string name, const string& size,  int _navyPersonnell, int _armyPersonnell, int _airforcePersonnell) {
    countryName = name;
    _size = size;
    navyPersonnell = _navyPersonnell;
    armyPersonnell = _armyPersonnell;
    airforcePersonnell = _airforcePersonnell;
    totalPersonnel = navyPersonnell + armyPersonnell + airforcePersonnell;
}

/**
 * @brief return total personnel
 * @return total personnel
 */
int concreteCountry::getTotalPersonnel() {
    return totalPersonnel;
}

/**
 * @brief return army personnel
 * @return army personnel
 */
int concreteCountry::getArmyPersonnel() {
    return this->armyPersonnell;
}

/**
 * @brief return navy personnel
 * @return navy personnel
 */
int concreteCountry::getNavyPersonnel() {
    return this->navyPersonnell;
}

/**
 * @brief return airforce personnel
 * @return airforce personnel
 */
int concreteCountry::getAirforcePersonnel() {
    return this->airforcePersonnell;
}

/**
 * @brief set military for this country
 * @param _air airforce military
 * @param _arm army military
 * @param _nav navy military
 */
void concreteCountry::setMilitaries(abstractMilitary* _air, abstractMilitary* _arm, abstractMilitary* _nav) {
    _airforce = _air;
    _army = _arm;
    _navy = _nav;
}

//Bandisa Add On

/**
 * @brief  Add Venue/Theater and mode of transport 
 *  A country has different modes of transport eg: Water, Land
 *  Theater is where the war happens
 *
 */
void concreteCountry::addTheaterAndTransport() {
    //Bandisa
    numOfTheaters = 0.135 * totalPersonnel;
    TheaterSize = 0.413 * totalPersonnel;
    Theaters = new Theater *[numOfTheaters];
    Transports = new ModesOfTransport *[numOfTheaters];
    //creating different theater types
    //creating different transport types and linking it to the country and corresponding theater
    for (int i = 0; i < numOfTheaters; i++) {
        if (i % 2 == 0) {
            Theaters[i] = new LandTheater(this, TheaterSize);
            Transports[i] = new LandTransport(this, Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
        } else if (i % 3 == 0) {
            Theaters[i] = new AirTheater(this, TheaterSize);
            Transports[i] = new AirSpaceTransport(this, Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
        } else {
            Theaters[i] = new WaterTheater(this, TheaterSize);
            Transports[i] = new WaterTransport(this, Theaters[i]);
            Theaters[i]->addModeOfTransport(Transports[i]);
        }
        if (i > 0) {
            Theaters[i - 1]->add(Theaters[i]); //creating chain for chain of command
        }
    }
}

/**
 * @brief  Attack in the air 
 * @param _attackCountry attack country
 * @param personnel personnel size
 */
void concreteCountry::attackAir(concreteCountry *_attackCountry, int personnel) {
    _attackCountry->_airforce->beingAttacked(this->_airforce->power);
    cout<<this->getName() + " dealt " + to_string(personnel) + " damage to " + _attackCountry->getName() + "'s Airforce";
}

/**
 * @brief  Attack in the sea 
 * @param _attackCountry attack country
 * @param personnel personnel size
 */
void concreteCountry::attackSea(concreteCountry *_attackCountry, int personnel) {
    _attackCountry->_navy->beingAttacked(this->_navy->power);
    cout<<this->getName() + " dealt " + to_string(personnel) + " damage to " + _attackCountry->getName() + "'s Navy";
}

/**
 * @brief  Attack in the Land 
 * @param _attackCountry attack country
 * @param personnel personnel size
 */
void concreteCountry::attackLand(concreteCountry *_attackCountry, int personnel) {
    _attackCountry->_army->beingAttacked(this->_army->power);
    cout<<this->getName() + " dealt " + to_string(personnel) + " damage to " + _attackCountry->getName() + "'s Army";
}



