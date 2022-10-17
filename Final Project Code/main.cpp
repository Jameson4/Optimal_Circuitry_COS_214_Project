#include <iostream>
#include "CountryGroup.h"
#include "Country.h"
using namespace std;

int main(){
    // Country members of the alliance
    Country *c1 = new Country("Portugal");
    Country *c2 = new Country("USA");
    Country *c3 = new Country("Germany");
    Country *c4 = new Country("Souht Africa");

    // insert countries int the alliance list
    CountryGroup* allianceA = new CountryGroup();
    CountryGroup* allianceB = new CountryGroup();
    
    cout<<"\n ==== Countries in alliance A ====" <<endl;

    allianceA->add(c1);
    allianceA->add(c2);
    // remove country from alliance
    allianceA->remove(c1);
    allianceA->print();

    allianceA->print();
    cout<<"\n ==== Countries in alliance B ====" <<endl;
    allianceB->add(c4);
    allianceB->add(allianceA);
    allianceB->print();


    
    return 0;
}