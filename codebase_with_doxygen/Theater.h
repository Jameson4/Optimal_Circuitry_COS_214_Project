/**
 * @brief Theater Class this is where war takes place
 * LandTheater, WaterTheater, and AirTheater inherit from this
 * This describes different attributes/features of war venue
 * @class Theater
 * @author Bandisa
 */
#ifndef theater_h
#define theater_h
#include <vector>
#include "abstractMilitary.h"
#include "ModesOfTransport.h"
#include "country.h"

class Theater{
    protected:
        static ModesOfTransport* ModesOfTransport;
        abstractMilitary ***Military;
        int size,numFighters;
        country *country;
        Theater *next;
    public:
        Theater(country *c,int s);
        void add(Theater*);
        virtual void addModeOfTransport(ModesOfTransport* m);
        virtual bool isEmpty();
        virtual void fight()=0;
        virtual void addMilitary(abstractMilitary* m);
        virtual ~Theater();
};

#endif