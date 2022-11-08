#include "WarSystemFacade.h"

WarSystemFacade::WarSystemFacade(){
    _country = NULL;
    cout<<"Facade has been created"<<endl;
}

concreteCountry* WarSystemFacade::createCountry(string name, string size) {
    if(_country != NULL){
        delete _country;
    }
    _country =  new concreteCountry(name, size);
    // createMilitary();
    // add modes of transport and theater
    _addTheaterAndTransport();
    return _country;
}

void WarSystemFacade::addCountryToAlliance(concreteCountry *country) {
    // _country->createAlliance(country);
}

void WarSystemFacade::attackAt(string where, concreteCountry* attackingCountry, concreteCountry* attackedCountry) {
    if(where =="sea"){
        attackingCountry->attackSea(attackedCountry, attackedCountry->getTotalPersonnel());
    }

    if(where =="land"){
        attackingCountry->attackLand(attackedCountry, attackedCountry->getTotalPersonnel());
    }
    
    if(where =="air"){
       attackingCountry->attackAir(attackedCountry, attackedCountry->getTotalPersonnel()); 
    }
}

void WarSystemFacade::fullAttack(concreteCountry* attackingCountry, concreteCountry* attackedCountry) {
    attackingCountry->invade(attackedCountry);
}

void WarSystemFacade::createMilitary() {
    //  cout<<"Test in"<<endl;
    // _country->setMilitaries(new airforce(_country->getTotalPersonnel(), "airforce"),new army(_country->getTotalPersonnel(), "army"),new navy(_country->getTotalPersonnel(), "navy"));
}

void WarSystemFacade::_addTheaterAndTransport() {
    _country->addTheaterAndTransport();
}

/*void WarSystemFacade::simulateWarSetSide(int a, int b) {

}*/