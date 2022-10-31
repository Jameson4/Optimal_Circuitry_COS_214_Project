#include "Country.h"
#include <exception>
#include <iostream>
#include <string>

using namespace std;

Country::Country(string name) {
	// constructor 1
	this->name = name;
	modTransportCounter = 0;
	for(int i = 0; i < 3; i++){
		modesOfTransport_[0] = NULL;
	}
}

Country::Country(string name, double size) {
	// constructor 2

	this->name = name;
	this->countrySize = size;
	modTransportCounter = 0;
	for(int i = 0; i < 3; i++){
		modesOfTransport_[0] = NULL;
	}
}

Country::~Country(){
	// Destructor
	    if(modesOfTransport_ != null) {
        for(int i = 0; i < 3; i++){
             delete modesOfTransport_[i];
        }
        delete [] modesOfTransport_; 
    }
	modTransportCounter = 0;
}

// set mode of transport
void Country::addCountryModeOfTransport(Theater* theaters, bool isOperational, int damage, int health, string type) {
	// string type: {Water, Air, Land } determines what mode of tranport is being added
	if(modTransportCounter < 3) {  //create at most 3 modes of transportation  
		modesOfTransport_[modTransportCounter++] = new  ModesOfTransport(theaters, isOperational, damage, health, type);   
	}
}

// return mode of transport based on type {Water, Land, Air}
ModesOfTransport* Country::getCountryModeOfTransport(string type){
	for(int i = 0; i < 3; i++) {
		if(modesOfTransport_[i] != null && modesOfTransport_[i]->getType() == type) {
			return modesOfTransport_[i];
		}
	}

	return NULL; // Invalid object
}

void Country::add(AllianceCountry* c){}
void Country::remove(AllianceCountry* c){}

double Country::getCountrySize(){
	return countrySize;
}
void Country::setCountrySize(double s){
	countrySize = s;
}
string Country::getName() {
	return this->name;
}

void Country::setName(string name) {
	this->name = name;
}

// print country info
void Country::print() {
	cout<< getName() << endl; 
	cout<< getCountrySize() <<endl;
}


