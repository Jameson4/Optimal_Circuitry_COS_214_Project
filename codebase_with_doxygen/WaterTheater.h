/**
 * @brief WaterTheater Water venue for the war
 * @class WaterTheater
 * @author Bandisa
 */
#ifndef WaterTheater_h
#define WaterTheater_h
#include <string>
#include "Theater.h"

class WaterTheater:public Theater{
    private:    
        std::string type;
    public:
        WaterTheater(class country*,int);
        void fight();   
};
#endif