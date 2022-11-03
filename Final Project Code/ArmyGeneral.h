#ifndef ArmyGeneral_h
#define ArmyGeneral_h
#include"Observer.h"
#include"abstractMilitary.h"
#include"country.h"
#include<string>

class ArmyGeneral: public observer{
    private:
        abstractMilitary** troops;
        int NumTroopsAlive,numEnrolled;
        int sizeOfTroops;
        country *country;
        std::string name;
    public:
        void update();
        int getNumTroopsAlive();
        void enrollTroop(abstractMilitary* t);
        ArmyGeneral(int s,country *c,std::string n);
};
#endif
