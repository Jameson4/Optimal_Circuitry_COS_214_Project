#ifndef WaterTheater_h
#define WaterTheater_h
#include <string>
#include "Theater.h"
class WaterTheater:public Theater{
    private:    
        std::string type;
    public:
        WaterTheater(country*,int);
        void fight();   
};
#endif