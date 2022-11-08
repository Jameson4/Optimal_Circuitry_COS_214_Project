#include "PauseCommand.h"


/**
 * @brief Construct a new Pause Command:: Pause Command object
 * 
 * @param w 
 * @param c 
 */
PauseCommand::PauseCommand(War* w, Caretaker* c) : war(w) , carer(c) {}

/**
 * @brief Invokes Pause operation on War object
 * 
 */
void PauseCommand::execute() {
    war->stop();
}


/**
 * @brief Destroy the Pause Command:: Pause Command object
 * 
 */
PauseCommand::~PauseCommand() {
    war = 0;
    carer = 0;
}