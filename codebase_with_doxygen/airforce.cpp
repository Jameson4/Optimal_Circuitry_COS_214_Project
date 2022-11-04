
#include "airforce.h"

/// @author Danie
///
/**
 * @brief constructor
 * instantiates airforce military
 * @param _personnel  quantity
 * @param _type army
 */
airforce::airforce(int _personnel, string _type) {
    personnel = _personnel;
    type = _type;
    health = personnel * 0.1 * 5;
    power = personnel * 0.5 * 2;
}

/**
 * @brief method when airforce is being attacked
 * if after damage of the attack health <= 0 airforce is eliminated
 * @param damage  weight point of the attack
 */
void airforce::beingAttacked(int damage) {
    health -= damage;
    if(health <= 0){
        cout<<"Airforce has been eliminated\n";
    }
}

