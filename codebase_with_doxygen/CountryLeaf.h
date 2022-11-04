/**
 * @brief Concrete class, leaf  participant of composite pattern
 * This stores a country as member of an alliance
 * 
 * @class CountryLeaf
 * @author Israel
 */
#ifndef __Country_h__
#define __Country_h__

#include "AllianceCountry.h"
#include<iostream>
#include <string>
using namespace std;

class CountryLeaf: public AllianceCountry
{
	public: 
		CountryLeaf(concreteCountry* country); 
		~CountryLeaf();
		virtual void add(AllianceCountry* c);
		virtual void remove(AllianceCountry* c); 
		virtual void print(); // print coutry info
	private:
		concreteCountry* countryRef; // pointer to concreteCountry
};

#endif
