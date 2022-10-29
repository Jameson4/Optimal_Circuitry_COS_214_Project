/*  ##### Composite design pattern being used #####
	This is the leaf of the pattern
*/
#ifndef __ModesOfTransport__
#define __ModesOfTransport__

// #include "Theater.h"
#include<iostream>
#include <string>
using namespace std;

class ModesOfTransport
{
	public:
        ModesOfTransport(bool isOperational, int damage, Theater *theater_);
        virtual ~ModesOfTransport();
        void setIsOperational(bool isOperational);
        bool getIsOperational();
        void setDamage(int d);
        void setName(string name);
        string getName();
        int getDamage();
        // Theater* getTheater();
        // void setTheater(Theater* theater_)
        virtual void attack() = 0;
	private:
        bool isOperational;
        int damage;
        string name;
        Theater* theaters; // Modes of transport are present in the theater Class
};

#endif
