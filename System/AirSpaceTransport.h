#ifndef AirSpaceTransport_h
#define AirSpaceTransport_h
#include "ModesOfTransport.h"


class AirSpaceTransport: public ModesOfTransport{
    public:
        AirSpaceTransport(country*,Theater*);
        void transport(abstractMilitary *troop);
};
#endif