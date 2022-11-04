#include "CountryGroup.h"
#include <algorithm>
#include <iostream>

using namespace std;

/// @author Israel
//

/**
 * @brief constructor of the class
 * @todo Instantiates CountryGroup object
 *
 */
CountryGroup::CountryGroup() {
	// Constructor
}

/**
 * @brief destructor of the class
 */
CountryGroup::~CountryGroup() {
	// destructors
	/*
	vector<AllianceCountry*>:: iterator it;
  	for (it = countries.begin(); it != countries.end(); ++it)
	    delete *it;
	*/
}

/**
 * @brief add country member method
 * @todo add a country to the alliance List
 * @param c  a country object to be added to the alliance List
 */
void CountryGroup::add(AllianceCountry* c) {
	countries.push_back(c);
}

/**
 * @brief remove country member method
 * @todo remove specified country from the alliance List
 * @param c  a country object to be remeoved from the alliance List
 */
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
/**
 * @brief print country method
 * @todo Traverse through each country member in the hiearchy and print information
 */
void CountryGroup::print() {
	vector<AllianceCountry*>:: iterator it;
	for (it = countries.begin(); it != countries.end(); ++it)
		(*it)->print();
}

