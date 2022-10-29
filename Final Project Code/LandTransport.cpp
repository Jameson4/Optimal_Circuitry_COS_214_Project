#include "LandTransport"

LandTransport::LandTransport(string name, bool isOperational, int damage, Theater *theater_)
:ModesOfTransport(isOperational,damage,theater_) 
{
    setName(name);
}

LandTransport::~LandTransport(){
// destructor
}

void LandTransport::attack(){

}


