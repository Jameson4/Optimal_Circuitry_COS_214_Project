#include "AirSpaceTransport"

AirSpaceTransport::AirSpaceTransport(string name, bool isOperational, int damage, Theater *theater_)
:ModesOfTransport(isOperational,damage,theater_) 
{
    setName(name);
}

AirSpaceTransport::~AirSpaceTransport(){
// destructor
}

void AirSpaceTransport::attack(){

}


