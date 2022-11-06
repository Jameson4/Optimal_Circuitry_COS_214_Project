#include "Command.h"
#include "Caretaker.h"
#include "War.h"
#include "LaunchReanactment.h"
#include <iostream>
using namespace std;

int main() {
    //construction
    War* war = new War();
    Caretaker* carer = new Caretaker();
    LaunchReanactment* l = new LaunchReanactment(war,carer);

    string i;

    cout<<"Test 1: \n";
    cout<<"Testing if saving and restoring correctly!\n";
    //pause
    l->switch_();
    //wait for resume
    cin.ignore();
    //resume and save
    l->switch_();

    //simulating change
    war->step();
    war->step();
    war->step();

    //pause to undo
    l->switch_();
    //undo to previous state
    cin.ignore();
    l->Undo();
    cin.ignore();
    //resume and save
    l->switch_();

    cin.ignore();
    cout<<"Test 2:\n";
    cout<<"Checking if it can handle retriving more Mementos from the caretaker that arent there\n";
    cin.ignore();

    //pause
    l->switch_();

    cout<<"Undo 3 times\n";
    cin.ignore();
    l->Undo();
    l->Undo();
    l->Undo();
    cin.ignore();

    //resune
    l->switch_();
    
    cin.ignore();
    cout<<"Test 3:\n";
    cout<<"Checking if we are able to Undo without Pausing\n";
    cin.ignore();

    l->Undo();
    l->Undo();

    cin.ignore();

    //destruction
    delete l;
    delete war;
    delete carer;
    
    return 0;
}