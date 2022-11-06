#ifndef NavyGeneral_h
#define NavyGeneral_h
#include"Observer.h"

class NavyGeneral: public Observer{
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
        NavyGeneral(int s,country *c,std::string n);
        void setPhase(std::string p);
        int getNumEnrolled();
        void report();
};
#endif
