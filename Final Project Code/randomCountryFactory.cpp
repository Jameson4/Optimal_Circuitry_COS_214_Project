//
// Created by DScho on 2022/10/21.
//

#include "randomCountryFactory.h"
#include "concreteCountry.h"

country *randomCountryFactory::createCountry(string _name) {
    country* retCountry = new concreteCountry(_name);
    return retCountry;
}
