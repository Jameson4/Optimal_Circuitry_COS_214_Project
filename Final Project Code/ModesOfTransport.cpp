#include "ModesOfTransport.h"


ModesOfTransport::ModesOfTransport(bool isOperational, int damage, Theater *theater_){
    setIsOperational(isOperational);
    setDamage(damage);
    setTheater(theater_);
}

void ModesOfTransport::setName(string name){
    this->name = name;
}

string ModesOfTransport::getName(){
    return name;
}

void ModesOfTransport::setIsOperational(bool isOperational){
    this->isOperational = isOperational;
}

bool ModesOfTransport::getIsOperational(){
    return isOperational;
}

void ModesOfTransport::setDamage(int d){
    damage = d;
}

int ModesOfTransport::getDamage(){
    return damage
}

 Theater* ModesOfTransport::getTheater() { ////// Waiting for Theater Class
    return theaters;
}
void ModesOfTransport::setTheater(Theater* theater_) {  ///// Waiting for Theater Class
    // delete theater previous value before putting new one if it exists
    if(theaters != null) {
        for(int i = 0; i < 3; i++){
             delete theaters[i];
        }
        delete [] theaters; 
    }

    // set different theaters for this country
    theaters[0] = new WaterTheater(theater_[0]->WaterTheater); // Theater needs copy constructor because of initialization with same object
    theaters[1] = new LandTheater(theater_[1]->LandTheater);  // ""
    theaters[2] = new AirTheater(theater_[2]->AirTheater); // ""
}

ModesOfTransport::~ModesOfTransport() {
    if(theaters != null) {
        for(int i = 0; i < 3; i++){
             delete theaters[i];
        }
        delete [] theaters; 
    }
}
