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
void navy::attack(abstractMilitary * attacked){
    if(Country->getName()!=attacked->getCountry()->getName()){
        cout<<"Personel #"<<personnel<<" from "<<Country->getName()<<" Of Type "<<type<<" Attacked: >>>>>"<<endl;
        cout<<"<<<<<< Personel #"<<attacked->personnel<<" from "<<attacked->getCountry()->getName()<<" Of Type "<<attacked->type<<endl;
        attacked->beingAttacked(getHealth());
    }
    else{
        cout<<"Personel #"<<personnel<<" from "<<Country->getName()<<" Of Type "<<type<<" Tried to shoot his ally"<<endl;
    }
}
//observers
void  navy::signUpToMilitary(Observer *o){//sign up to one of 3 generals, per type
    HighRankingOfficer=o;
    cout<<"Troop #"<<personnel<<" Of type "<<type<<" will be reporting to general "<<HighRankingOfficer->getName()<<endl;
    HighRankingOfficer->enrollTroop(this);
}
void  navy::report(){//report to the general
    cout<<"Troop #"<<personnel<<" Of type "<<type<<" reporting to general "<<HighRankingOfficer->getName()<<endl;
    HighRankingOfficer->update();
}
Observer*  navy::getHighRankingOfficer(){//get generals
    return HighRankingOfficer;
}