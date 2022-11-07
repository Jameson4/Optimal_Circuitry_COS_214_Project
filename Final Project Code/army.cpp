//
// Created by DScho on 2022/10/28.
//

#include "army.h"

army::army(int _personnel, string _type) {
    personnel = _personnel;
    type = _type;
    health = personnel * 0.2 * 5;
    power = personnel * 0.5 * 2;
}

void army::beingAttacked(int damage) {
    health -= damage;
    if(health <= 0){
        cout<<"Army has been eliminated\n";
    }
}

void army::attack(abstractMilitary * attacked){
    if(Country->getName()!=attacked->getCountry()->getName()){
        cout<<"Personel #"<<personnel<<" from "<<Country->getName()<<" Of Type "<<type<<" Attacked: >>>>>"<<endl;
        cout<<"<<<<<< Personel #"<<attacked->personnel<<" from "<<attacked->getCountry()->getName()<<" Of Type "<<attacked->type<<endl;
        attacked->beingAttacked(getHealth());
    }
    else{
        cout<<"Personel #"<<personnel<<" from "<<Country->getName()<<" Of Type "<<type<<" Tried to shoot his ally"<<endl;
    }
}
