
#include "navy.h"

/// @author Danie
///
/**
 * @brief constructor
 * instantiates navy military
 * @param _personnel  quantity
 * @param _type army
 */
navy::navy(int _personnel, string _type) {
    personnel = _personnel;
    type = _type;
    health = personnel * 0.15 * 5;
    power = personnel * 0.5 * 2;
}

/**
 * @brief method when navy is being attacked
 * if after damage of the attack health <= 0 navy is eliminated
 * @param damage  weight point of the attack
 */
void navy::beingAttacked(int damage) {
    health -= damage;
    if(health <= 0){
        cout<<"Navy has been eliminated\n";
    }
}
