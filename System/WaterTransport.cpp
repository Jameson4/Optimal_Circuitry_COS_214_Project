#include "WaterTransport.h"
#include "navy.h"
WaterTransport::WaterTransport(country *c, Theater *t):ModesOfTransport(c,t){} 
void WaterTransport::transport(abstractMilitary *troop){
    navy *n=dynamic_cast<navy*>(troop);//check if troop belongs to navy
    if(getsOperational()){
        if(n)
            theaters->addMilitary(n);
        else{
            cout<<"ERROR: This troop can not be transported by the Navy as it is not part of this division!"<<endl;
        }
    }
    else{
        cout<<"Road to Sea is unoperational as it has been destroyed by the enemy"<<endl;
    }
}