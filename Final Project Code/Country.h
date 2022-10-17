/*  ##### Composite design pattern being used #####
	This is the leaf of the pattern
*/

#ifndef __Country_h__
#define __Country_h__

#include "AllianceCountry.h"
#include<iostream>
#include <string>
using namespace std;

class Country: public AllianceCountry
{
	public: 
	Country(string name);
	~Country();
	string getName(); // return name of the country
	void setName(string name); // set name of the country
	virtual void add(AllianceCountry* c);
	virtual void remove(AllianceCountry* c); 
	virtual void print(); // print coutry info
	private:
	string name;
};

#endif
