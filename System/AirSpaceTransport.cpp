#include "AirSpaceTransport.h"
#include "airforce.h"
AirSpaceTransport::AirSpaceTransport(country *c, Theater *t):ModesOfTransport(c,t){} 
void AirSpaceTransport::transport(abstractMilitary *troop){
    airforce *n=dynamic_cast<airforce*>(troop);//check if troop belongs to navy
    if(getsOperational()){
        if(n)
            theaters->addMilitary(n);
        else{
            std::cout<<"ERROR: This troop can not be fly as it is not part of this division!"<<std::endl;
        }
    }
    else{
        std::cout<<"Aircarrier is unoperational as it has been destroyed by the enemy"<<std::endl;
    }
}