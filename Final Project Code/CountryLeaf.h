/*  ##### Composite design pattern being used #####
	This is the leaf of the pattern
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
