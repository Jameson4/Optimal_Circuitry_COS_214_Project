#ifndef AirForceGeneral_h
#define AirForceGeneral_h
#include"Observer.h"

class AirForceGeneral: public Observer{
    private:
        abstractMilitary** troops;
        int NumTroopsAlive,numEnrolled;
        int sizeOfTroops;
        country *country;
        std::string name,phase;
    public:
        void update();
        int getNumTroopsAlive();
        void enrollTroop(abstractMilitary* t);
        AirForceGeneral(int s,country *c,std::string n);
        void setPhase(std::string p);
        int getNumEnrolled();
        void report();
};
#endif
