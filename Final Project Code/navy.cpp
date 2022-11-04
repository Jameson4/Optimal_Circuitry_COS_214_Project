//
// Created by DScho on 2022/10/28.
//

#include "navy.h"

navy::navy(int _personnel, string _type) {
    personnel = _personnel;
    type = _type;
    health = personnel * 0.15 * 5;
    power = personnel * 0.5 * 2;
}

void navy::beingAttacked(int damage) {
    health -= damage;
    if(health <= 0){
        cout<<"Navy has been eliminated\n";
    }
}
