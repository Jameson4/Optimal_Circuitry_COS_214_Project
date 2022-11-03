#include "CountryLeaf.h"
#include <exception>
#include <iostream>
#include <string>

using namespace std;

CountryLeaf::CountryLeaf(concreteCountry* country) {
	countryRef = country;
}

CountryLeaf::~CountryLeaf(){
	// Destructor
}

void CountryLeaf::add(AllianceCountry* c){}
void CountryLeaf::remove(AllianceCountry* c){}

// print country info
void CountryLeaf::print() {
	cout<<"Name: "<< countryRef->getName() << endl; 
	cout<<"Total Personnel: "<<countryRef->getTotalPersonnel() <<endl;
	cout<<"Army Personnel: "<<countryRef->getArmyPersonnel() <<endl;
	cout<<"Navy personnel: "<<countryRef->getNavyPersonnel() <<endl;
	cout<<"AirForce Personnel: "<<countryRef->getAirforcePersonnel() <<endl;
}


