#include "UndoCommand.h"
using namespace std;

UndoCommand::UndoCommand(War* w, Caretaker* c) : war(w) , carer(c) {}
void UndoCommand::execute() {
    war->restore(carer->retrieve());
}

UndoCommand::~UndoCommand() {
    war = 0;
    carer = 0;
}