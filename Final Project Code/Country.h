/*  ##### Composite design pattern being used #####
	This is the leaf of the pattern
*/

#ifndef __Country_h__
#define __Country_h__

#include "AllianceCountry.h"
#include "ModesOfTransport.h"
#include "Theater.h"
#include<iostream>
#include <string>
using namespace std;

class Country: public AllianceCountry
{
	public: 
	Country(string name);
	Country(string name, double size); //country name and size
	~Country();
	void addCountryModeOfTransport(Theater* theaters, bool isOperational, int damage, int health, string type); // add mode of transport for this current country
	ModesOfTransport* getCountryModeOfTransport(string type); // Return mode of Transport type:{Water, Air, Land } ???
	string getName(); // return name of the country
	void setName(string name); // set name of the country
	double getCountrySize();
	void setCountrySize(double size);
	virtual void add(AllianceCountry* c);
	virtual void remove(AllianceCountry* c); 
	virtual void print(); // print coutry info
	protected:
	int modTransportCounter; // count modes of transportaion.
	private:
	string name;
	ModesOfTransport *modesOfTransport_[3];
	double countrySize;
};

#endif
