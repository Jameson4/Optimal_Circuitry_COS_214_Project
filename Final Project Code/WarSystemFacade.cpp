#include "WarSystemFacade.h"

WarSystemFacade::WarSystemFacade(){

    cout<<"Facade has been created"<<endl;
}

concreteCountry* WarSystemFacade::createCountry(string name, string size) {
    _country =  new concreteCountry(name, size);
    // create military
    createMilitary();
    // add modes of transport and theater
    _addTheaterAndTransport();
    return _country;
}

void WarSystemFacade::addCountryToAlliance(concreteCountry *country) {
    // _country->createAlliance(country);
}

void WarSystemFacade::attackAt(string where, concreteCountry* country) {
    if(where =="sea"){
        _country->attackSea(country, _country->getTotalPersonnel());
    }

    if(where =="land"){
        _country->attackLand(country, _country->getTotalPersonnel());
    }
    
    if(where =="air"){
       _country->attackAir(country, _country->getTotalPersonnel()); 
    }
}

void WarSystemFacade::fullAttack(concreteCountry *country) {
    _country->invade(country);
}

void WarSystemFacade::createMilitary() {
    _country->setMilitaries(new airforce(_country->getTotalPersonnel(), "airforce"),new army(_country->getTotalPersonnel(), "army"),new navy(_country->getTotalPersonnel(), "navy"));
}

void WarSystemFacade::_addTheaterAndTransport() {
    _country->addTheaterAndTransport();
}

/*void WarSystemFacade::simulateWarSetSide(int a, int b) {

}*/