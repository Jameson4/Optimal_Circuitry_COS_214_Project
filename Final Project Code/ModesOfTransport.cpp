/*
 * Bandisa
 */
#include "ModesOfTransport.h"

ModesOfTransport( Theater* theaters,bool isOperational,int damage,int health): theaters(theaters), isOperational(isOperational),damage(damage),health(health){};
bool ModesOfTransport::getsOperational(){
    return (health>0);
}
void ModesOfTransport::setisOperational(bool isOperational){
    this->isOperational=isOperational;
}
void ModesOfTransport::attack(){

}