#include "UndoCommand.h"
#include <iostream>
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
    cout<<"Resturning to previous state of war: \n";
    Memento* temp = carer->retrieve();
    if (temp != NULL) {
        war->restore(carer->retrieve());
        carer->pop();
        cout<<"Previous State: "<<war->getState()->currentState<<endl;
    } else {
        cout<<"No more saves available\n";
    }
    
}


/**
 * @brief Destroy the Undo Command:: Undo Command object
 * 
 */
UndoCommand::~UndoCommand() {
    war = 0;
    carer = 0;
}