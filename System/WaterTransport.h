#ifndef WaterTransport_h
#define WaterTransport_h
#include "ModesOfTransport.h"

class WaterTransport: public ModesOfTransport{
    public:
        WaterTransport(country*,Theater*);
        void transport(abstractMilitary *troop);
};
#endif