#ifndef __LandTransport__
#define __LandTransport__

#include "ModesOfTransport.h"

class LandTransport:: ModesOfTransport{
    public:
    LandTransport(string name, bool isOperational, int damage, Theater *theater_);
    ~LandTransport();
    void attack();
}

#endif