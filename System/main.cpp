#include "concreteCountry.h"
#include <iostream>
#include "abstractMilitary.h"
#include "abstractMilitaryFactory.h"
#include "airforce.h"
#include "army.h"
#include "navy.h"
#include "country.h"
#include "countryFactory.h"
#include "militaryFactory.h"
#include "standardCountryFactory.h"
#include <time.h>

using namespace std;

int main() {
    srand(time(nullptr));

    concreteCountry* ZA = new concreteCountry("South Africa", "medium");
    concreteCountry* ENG = new concreteCountry("England", "small");
    concreteCountry* USA = new concreteCountry("America", "large");
    concreteCountry* China = new concreteCountry("China", "large");
    cout<<"\n";

/*    militaryFactory* milFactory = new militaryFactory();

     milFactory->createMilitary(ZA);
    cout<<"\n";
    milFactory->createMilitary(ENG);
    cout<<"\n";
    milFactory->createMilitary(USA);
    cout<<"\n";
    milFactory->createMilitary(China);
    cout<<"\n";

    ZA->attackAir(ENG,200); */

    return 0;
}