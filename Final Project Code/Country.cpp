#include "Country.h"
#include <exception>
#include <iostream>
#include <string>

using namespace std;

Country::Country(string name) {
	// constructor 1
	this->name = name;
}
Country::Country(string name, double size) {
	// constructor 2
	this->name = name;
	this->countrySize = size;
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


