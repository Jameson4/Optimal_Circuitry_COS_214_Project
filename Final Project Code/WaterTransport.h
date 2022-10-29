#ifndef __WaterTransport__
#define __WaterTransport__

#include "ModesOfTransport.h"

class WaterTransport:: ModesOfTransport{
    public:
    WaterTransport(string name, bool isOperational, int damage, Theater *theater_);
    ~WaterTransport();
    void attack();
}

#endif