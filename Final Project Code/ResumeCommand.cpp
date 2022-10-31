#include "ResumeCommand.h"
using namespace std;

ResumeCommand::ResumeCommand(War* w, Caretaker* c) : war(w) , carer(c) {}
void ResumeCommand::execute() {
    war->resume();
}

ResumeCommand::~ResumeCommand() {
    war = 0;
    carer = 0;
}