//
// Created by DScho on 2022/10/28.
//

#include "army.h"

army::army(int _personnel, string _type) {
    personnel = _personnel;
    type = _type;
    health = personnel * 0.2 * 5;
}

void army::beingAttacked(int damage) {
    health -= damage;
}
