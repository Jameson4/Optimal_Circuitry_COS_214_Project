//
// Created by DScho on 2022/10/28.
//

#include "militaryFactory.h"

void militaryFactory::createMilitary(country* _country) {
    _army = new army(_country->getArmyPersonnel(),"Army");
    cout<<_country->getName() + " has an Army with " + to_string(_country->getArmyPersonnel()) + " soldiers\n";
    _navy = new navy(_country->getNavyPersonnel(),"Navy");
    cout<<_country->getName() + " has a Navy with " + to_string(_country->getNavyPersonnel()) + " soldiers\n";
    _airforce = new airforce(_country->getAirforcePersonnel(),"Airforce");
    cout<<_country->getName() + " has an Airforce with " + to_string(_country->getAirforcePersonnel()) + " soldiers\n";
}

militaryFactory::militaryFactory() {

}
