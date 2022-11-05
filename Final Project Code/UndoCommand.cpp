#include "UndoCommand.h"
using namespace std;

/**
 * @brief Construct a new Undo Command:: Undo Command object
 * 
 * @param w 
 * @param c 
 */
UndoCommand::UndoCommand(War* w, Caretaker* c) : war(w) , carer(c) {}

/**
 * @brief retrieves Memento from Caretaker object carer and asks War object war to restore itself
 * 
 */
void UndoCommand::execute() {
    war->restore(carer->retrieve());
}


/**
 * @brief Destroy the Undo Command:: Undo Command object
 * 
 */
UndoCommand::~UndoCommand() {
    war = 0;
    carer = 0;
}
