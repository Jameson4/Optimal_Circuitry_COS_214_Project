#ifndef LandTheater_h
#define LandTheater_h
#include <string>
#include "Theater.h"
class LandTheater:public Theater{
    private:    
        std::string type;
    public:
        LandTheater(country*,int);
        void fight(); 
};
#endif