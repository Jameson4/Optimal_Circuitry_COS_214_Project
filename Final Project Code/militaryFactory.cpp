//
// Created by DScho on 2022/10/28.
//

#include "militaryFactory.h"

void militaryFactory::createMilitary(concreteCountry* _country) {

    _armyTemp = new army(_country->getArmyPersonnel(),"Army");
    cout<<_country->getName() + " has an Army with " + to_string(_country->getArmyPersonnel()) + " soldiers\n";
    _navyTemp = new navy(_country->getNavyPersonnel(),"Navy");
    cout<<_country->getName() + " has a Navy with " + to_string(_country->getNavyPersonnel()) + " soldiers\n";
    _airforceTemp = new airforce(_country->getAirforcePersonnel(),"Airforce");
    cout<<_country->getName() + " has an Airforce with " + to_string(_country->getAirforcePersonnel()) + " soldiers\n";

    _country->setMilitaries(_airforceTemp,_armyTemp,_navyTemp);
}

militaryFactory::militaryFactory() {

}

