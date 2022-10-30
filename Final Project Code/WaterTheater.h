#ifndef WaterTheater_h
#define WaterTheater_h
#include <string>
#include "Theater.h"
class WaterTheater:Theater{
    private:    
        std::string type;
    public:
        WaterTheater(ModesOfTransport* ModesOfTransport,Theater *successor,abstractMilitary ***Military,std::string ty);
        void addModeOfTransport(ModesOfTransport* m);
        bool isEmpty();
        void fight();
        void addMilitary(abstractMilitary* m);    
};
#endif