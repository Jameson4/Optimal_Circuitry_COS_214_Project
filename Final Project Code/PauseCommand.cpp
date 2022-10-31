#include "PauseCommand.h"

PauseCommand::PauseCommand(War* w, Caretaker* c) : war(w) , carer(c) {}
void PauseCommand::execute() {
    carer->add(war->stop());
}

PauseCommand::~PauseCommand() {
    war = 0;
    carer = 0;
}