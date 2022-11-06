#include "ResumeCommand.h"
#include <iostream>
using namespace std;


/**
 * @brief Construct a new Resume Command:: Resume Command object
 * 
 * @param w 
 * @param c 
 */
ResumeCommand::ResumeCommand(War* w, Caretaker* c) : war(w) , carer(c) {}

/**
 * @brief Saves current state of the War and stores the state with the caretaker and invokes resume operation on War object
 * 
 */
void ResumeCommand::execute() {
    cout<<"Saving current state of war: "<<endl<<"Current State: "<<war->getState()->currentState<<endl;
    carer->add(war->resume());
}


/**
 * @brief Destroy the Resume Command:: Resume Command object
 * 
 */
ResumeCommand::~ResumeCommand() {
    war = 0;
    carer = 0;
}
