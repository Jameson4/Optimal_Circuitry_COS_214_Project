/*  ##### Composite design pattern being used #####
	This is the Abstract class (Component of pattern)
	This will be implemented by countryGroup (Composite of pattern) also known as intermediate node
*/
#include <exception>
#ifndef __AllianceCountry_h__
#define __AllianceCountry_h__

class AllianceCountry
{
	public:
	virtual ~AllianceCountry(){};
	virtual void add(AllianceCountry* c) = 0; // will Add country to list of countries
	virtual void remove(AllianceCountry* c) = 0; // will remove country from list of countries
	virtual void print()  = 0; // will print coutries in present in alliance
};

#endif
