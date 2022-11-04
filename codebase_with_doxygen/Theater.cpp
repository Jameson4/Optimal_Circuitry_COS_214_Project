
#include "Theater.h"

/// @author Bandisa
/// 

/**
 * @brief constructor 
 * Instantiates a new theater for the war
 * This describes different attributes/features of war venue
 * @param c country
 * @param s size of country
 */
Theater::Theater(class country *c,int s){
    this->country=c;
    this->size=s;
}

/**
 * @brief desctructor 
 * When object goes out of scope it is deallocated
 */
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

/**
 * @brief Add theater by chain of command 
 * @param t theater 
 */
void Theater::add(Theater *t){ //creating chain for commands
    if(next)
        next->add(t);
    else
        next=t;
}

/**
 * @brief Add military to the war venue
 * @param m military 
 */
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

/**
 * @brief Add mode of transport to the war venue
 * @param m mode of transport
 */
void Theater::addModeOfTransport(class ModesOfTransport* m){
    ModesOfTransport = m;
}

/**
 * @brief check if the venue/Theater is empty 
 * @return true or false
 */
bool Theater::isEmpty(){
    return numFighters>0;
}