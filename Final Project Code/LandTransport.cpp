#include "LandTransport.h"
#include "army.h"
LandTransport::LandTransport(country *c, Theater *t):ModesOfTransport(c,t){} 
void LandTransport::transport(abstractMilitary *troop){
    army *n=dynamic_cast<army*>(troop);//check if troop belongs to navy
    if(getsOperational()){
        if(n)
            theaters->addMilitary(n);
        else{
            std::cout<<"ERROR: This troop can not be transported by Land as it is not part of this division!"<<std::endl;
        }
    }
    else{
        std::cout<<"Road is unoperational as it has been destroyed by the enemy"<<std::endl;
    }
}