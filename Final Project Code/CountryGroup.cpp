#include "CountryGroup.h"
#include <algorithm>
#include <iostream>

using namespace std;

CountryGroup::CountryGroup() {
	// Constructor
}

CountryGroup::~CountryGroup() {
	// destructors
	/*
	vector<AllianceCountry*>:: iterator it;
  	for (it = countries.begin(); it != countries.end(); ++it)
	    delete *it;
	*/
}

// add a country to list of countries
void CountryGroup::add(AllianceCountry* c) {
	countries.push_back(c);
}

// remove country from list of countries
void CountryGroup::remove(AllianceCountry* c) {

	// search whether country passed into the function is present in the list
	// iterator returned from the find
	auto it = find (countries.begin(), countries.end(), c);
	
	// The element/country was found
	if(it != countries.end()) {
		// int index =  it-countries.begin(); // this is the index of country to remove
		countries.erase(it); //remove country
		cout<<"Removed: "; (*it)->print(); // output country removed
		return;
	}
	// element was not found
	return;
}
// print country info for each child/country member
void CountryGroup::print() {
	vector<AllianceCountry*>:: iterator it;
	for (it = countries.begin(); it != countries.end(); ++it)
		(*it)->print();
}

