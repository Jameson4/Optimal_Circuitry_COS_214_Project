#include "LandTheater.h"

///@author Bandisa
///

/**
 * @brief LandTheater Land venue for the war
 * @param c country in the theater/venue
 * @param s size of military
 */
LandTheater::LandTheater(class country *c,int s):Theater(c,s){
    Military=new abstractMilitary**[size];
    for(int i=0;i<size;i++){
        Military[i]=new abstractMilitary*[size];
    }
}

/**
 * @brief trigger fight
 */
void LandTheater::fight(){

}