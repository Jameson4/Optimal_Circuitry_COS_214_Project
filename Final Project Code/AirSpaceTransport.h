#ifndef __AirSpaceTransport__
#define __AirSpaceTransport__

#include "ModesOfTransport.h"

class AirSpaceTransport:: ModesOfTransport{
    public:
    AirSpaceTransport(string name, bool isOperational, int damage, Theater *theater_);
    ~AirSpaceTransport();
    void attack();
}

#endif