#include "Country.h"
#include <exception>
#include <iostream>
#include <string>

using namespace std;

Country::Country(string name) {
	// constructor
	this->name = name;
}

Country::~Country(){
	// Destructor
}

void Country::add(AllianceCountry* c){}
void Country::remove(AllianceCountry* c){}
string Country::getName() {
	return this->name;
}

void Country::setName(string name) {
	this->name = name;
}

// print country info
void Country::print() {
	cout<< getName() << endl; 
}


