#include "WaterTransport"

WaterTransport::WaterTransport(string name, bool isOperational, int damage, Theater *theater_)
:ModesOfTransport(isOperational,damage,theater_) 
{
    setName(name);
}

WaterTransport::~WaterTransport(){
// destructor
}

void WaterTransport::attack(){

}


