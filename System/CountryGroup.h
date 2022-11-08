/*	 ##### Composite design pattern being used #####
	This is the the composite class of the pattern also known as the intermediate node
*/

#ifndef __CountryGroup_h__
#define __CountryGroup_h__

#include <exception>
#include "AllianceCountry.h"
#include "concreteCountry.h"
#include<iostream>
#include <vector>
using namespace std;

class CountryGroup: public AllianceCountry
{
	public: 
		CountryGroup(); // constructor
		virtual ~CountryGroup(); // destructor
		virtual void add(AllianceCountry* c); // Add country to list of countries
		virtual void remove(AllianceCountry* c); // remove country from list of countries
		virtual void print(); // print coutries in the list
	private:
		vector<AllianceCountry*> countries; // store list of countries in the alliance
};

#endif
