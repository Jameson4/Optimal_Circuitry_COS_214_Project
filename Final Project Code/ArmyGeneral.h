#ifndef ArmyGeneral_h
#define ArmyGeneral_h
#include"Observer.h"

class ArmyGeneral: public Observer{
    private:
        abstractMilitary** troops;
        int NumTroopsAlive,numEnrolled;
        int sizeOfTroops;
        country *Country;
        std::string name,phase;
    public:
        void update();
        int getNumTroopsAlive();
        void enrollTroop(abstractMilitary* t);
        ArmyGeneral(int s,country *c,std::string n);
        void setPhase(std::string p);
        int getNumEnrolled();
        void report();
        std::string getName();
};
#endif
