/**
 * @brief Abstract class, component participant of composite pattern
 *  AllianceCountry keeps a list of countries in a given alliance.
 * 
 * @class AllianceCountry
 * @author Israel
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
