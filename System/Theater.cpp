//Bandisa
#include "Theater.h"


Theater::Theater(country *c,int s){
    this->Country=c;
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
void Theater::add(Theater *t){ //creating chain for commands
    if(next)
        next->add(t);
    else
        next=t;
}
void Theater::remove(Theater *t){
    if(next==t){
        next=next->next;
    }
    else
        next->remove(t);
}
void Theater::addMilitary(abstractMilitary* m){
    int i=rand()%(size+1)+0;
    int j=rand()%(size+1)+0;
    bool added=false;
    if(numFighters<size*size){
        while(!added){
            if(Military && Military[i] && Military[i][j]==NULL){
                Military[i][j]=m;
                added=true;
                numFighters++;
                return;
            }
            else{
                i=rand()%(size+1)+0;
                j=rand()%(size+1)+0; 
            }
        }
    }    
}
void Theater::addModeOfTransport(ModesOfTransport* m){
    modesOfTransport=m;
}

bool Theater::isEmpty(){
    return numFighters>0;
}