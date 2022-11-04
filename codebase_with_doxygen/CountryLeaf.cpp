#include "CountryLeaf.h"
#include <exception>
#include <iostream>
#include <string>

using namespace std;


/**
 * @brief constructor of the class
 * @todo Instantiates CountryLeaf object
 * @param c  a country object to be added to the alliance
 */
CountryLeaf::CountryLeaf(concreteCountry* country) {
	countryRef = country;
}

/**
 * @brief destructor
 */
CountryLeaf::~CountryLeaf(){
	// Destructor
}

void CountryLeaf::add(AllianceCountry* c){}
void CountryLeaf::remove(AllianceCountry* c){}

/**
 * @brief print country method
 * @todo orint country information
 */
void CountryLeaf::print() {
	cout<<"Name: "<< countryRef->getName() << endl; 
	cout<<"Total Personnel: "<<countryRef->getTotalPersonnel() <<endl;
	cout<<"Army Personnel: "<<countryRef->getArmyPersonnel() <<endl;
	cout<<"Navy personnel: "<<countryRef->getNavyPersonnel() <<endl;
	cout<<"AirForce Personnel: "<<countryRef->getAirforcePersonnel() <<endl;
}


