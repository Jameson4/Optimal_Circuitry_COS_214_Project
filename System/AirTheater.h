#ifndef AirTheater_h
#define AirTheater_h
#include <string>
#include "Theater.h"
class AirTheater:public Theater{
    private:    
        std::string type;
    public:
        AirTheater(country *c,int s);
        void fight();
};
#endif