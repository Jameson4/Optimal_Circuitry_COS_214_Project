#include <iostream>
#include "abstractMilitary.h"
#include "abstractMilitaryFactory.h"
#include "airforce.h"
#include "army.h"
#include "navy.h"
#include "concreteCountry.h"
#include "country.h"
#include "countryFactory.h"
#include "militaryFactory.h"
#include "standardCountryFactory.h"

using namespace std;

int main() {
    concreteCountry* ZA = new concreteCountry("South Africa", "medium");

    militaryFactory* milFactory = new militaryFactory();

    milFactory->createMilitary(ZA);
}
