
#include "militaryFactory.h"


/// @author Danie
///
/**
 * @brief constructor
 *  create military for given country
 * @param _country  country whose military is from
 */
void militaryFactory::createMilitary(concreteCountry* _country) {

    _armyTemp = new army(_country->getArmyPersonnel(),"Army");
    cout<<_country->getName() + " has an Army with " + to_string(_country->getArmyPersonnel()) + " soldiers\n";
    _navyTemp = new navy(_country->getNavyPersonnel(),"Navy");
    cout<<_country->getName() + " has a Navy with " + to_string(_country->getNavyPersonnel()) + " soldiers\n";
    _airforceTemp = new airforce(_country->getAirforcePersonnel(),"Airforce");
    cout<<_country->getName() + " has an Airforce with " + to_string(_country->getAirforcePersonnel()) + " soldiers\n";

    _country->setMilitaries(_airforceTemp,_armyTemp,_navyTemp);
}

/**
 * @brief destructor
 */
militaryFactory::militaryFactory() {

}

