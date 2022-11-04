#include "army.h"

/// @author Danie
///
/**
 * @brief constructor
 * instantiates army military
 * @param _personnel  quantity
 * @param _type army
 */
army::army(int _personnel, string _type) {
    personnel = _personnel;
    type = _type;
    health = personnel * 0.2 * 5;
    power = personnel * 0.5 * 2;
}

/**
 * @brief method when army is being attacked
 * if after damage of the attack health <= 0 army is eliminated
 * @param damage  weight point of the attack
 */
void army::beingAttacked(int damage) {
    health -= damage;
    if(health <= 0){
        cout<<"Army has been eliminated\n";
    }
}
