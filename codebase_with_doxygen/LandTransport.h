/**
 * @brief Land mode of transport Class
 * 
 * @class WaterTransport
 * @author Bandisa
 */
#ifndef LandTransport_h
#define LandTransport_h
#include "ModesOfTransport.h"

class LandTransport: public ModesOfTransport{
    public:
        LandTransport(country*,Theater*);
};
#endif