#include "ModesOfTransport.h"

/// @author Bandisa
///
/**
 * @brief constructor
 * 
 * @param theaters // Venue of war
 * @param isOperational  operational state true or false
 * @param damage  weight of mode of transport
 * @param health  life points 
 */
ModesOfTransport::ModesOfTransport(Theater* theaters,bool isOperational,int damage,int health): theaters(theaters), isOperational(isOperational),damage(damage),health(health){};

/**
 * @brief return mode of transport operational state true or false
 * @return state of mode of transport
 */
bool ModesOfTransport::getsOperational(){
    return (health>0);
}

/**
 * @brief set mode of transport operational state true or false
 * @param isOperational operational state
 */
void ModesOfTransport::setisOperational(bool isOperational){
    this->isOperational=isOperational;
}

/**
 * @brief attack by the mode of transport
 */
void ModesOfTransport::attack(){

}