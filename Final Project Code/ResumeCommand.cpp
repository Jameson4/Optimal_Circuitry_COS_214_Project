#include "ResumeCommand.h"
using namespace std;

/**
 * @brief Construct a new Resume Command:: Resume Command object
 * 
 * @param w 
 * @param c 
 */
ResumeCommand::ResumeCommand(War* w, Caretaker* c) : war(w) , carer(c) {}

/**
 * @brief invokes resume operation on War object
 * 
 */
void ResumeCommand::execute() {
    war->resume();
}


/**
 * @brief Destroy the Resume Command:: Resume Command object
 * 
 */
ResumeCommand::~ResumeCommand() {
    war = 0;
    carer = 0;
}
