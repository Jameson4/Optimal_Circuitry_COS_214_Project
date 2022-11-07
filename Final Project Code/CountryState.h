#ifndef COUNTRYSTATE_H
#define COUNTRYSTATE_H
#include <string>
using namespace std;

class ModesOfTransport;
class Observer;
class abstractMilitary;

class CountryState {
    public:
        string countryName;
        string countrySize;
        int navyPersonel;
        int airforcePersonel;
        int armyPersonel;
        int totalPersonel;
        string size;
        int countrySize;
        int numTheatres;

        ModesOfTransport Transport;
        Observer HighRankingOfficers;
        
        abstractMilitary _airforce;
        abstractMilitary _army;
        abstractMilitary _navy;
};

#endif
