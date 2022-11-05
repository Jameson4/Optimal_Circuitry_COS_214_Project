#include "PauseCommand.h"

/**
 * @brief Construct a new Pause Command:: Pause Command object
 * 
 * @param w 
 * @param c 
 */
PauseCommand::PauseCommand(War* w, Caretaker* c) : war(w) , carer(c) {}

/**
 * @brief Pauses and saves current state of the War and stores the state with the caretaker
 * 
 */
void PauseCommand::execute() {
    carer->add(war->stop());
}


/**
 * @brief Destroy the Pause Command:: Pause Command object
 * 
 */
PauseCommand::~PauseCommand() {
    war = 0;
    carer = 0;
}
