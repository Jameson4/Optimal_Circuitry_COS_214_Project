/**
 * @brief Water mode of transport Class
 * 
 * @class WaterTransport
 * @author Bandisa
 */
#ifndef WaterTransport_h
#define WaterTransport_h
#include "ModesOfTransport.h"

class WaterTransport: public ModesOfTransport{
    public:
        WaterTransport(country*,Theater*);
};
#endif