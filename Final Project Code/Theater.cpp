#include "Theater.h"


Theater::Theater(ModesOfTransport* ModesOfTransport,Theater *successor,abstractMilitary ***Military,int s){
    this->ModesOfTransport=ModesOfTransport;
    this->successor=successor;
    this->Military=Military;
    this->size=s;
}
Theater::~Theater(){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(Military[i][j])
                delete Military[i][j];
        }
        delete [] Military[i];
    }
    delete [] Military;
    Military=NULL;
}