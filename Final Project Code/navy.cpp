//
// Created by DScho on 2022/10/28.
//

#include "navy.h"

navy::navy(int _personnel, string _type) {
    personnel = _personnel;
    type = _type;
    health = personnel * 0.15 * 5;
}
