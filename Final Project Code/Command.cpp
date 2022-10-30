#include "Command.h"
#include <iostream>
using namespace std;

DesignModeCommand::DesignModeCommand(War* w) : war_(w) {
    carer = new Caretaker();
}
void DesignModeCommand::execute() {
    while (true) {
        war_->resume();
        cout<<"Enter Command!: \n";
        string c = "";
        cin>>c;
        if (c == "pause") {
            pause();
        } else if(c == "undo") {
            undo();
        }
        else if(c == "end") {
            return;
        }else {
            war_->step(c);
        }
    }
}
void DesignModeCommand::pause() {
    war_->pause();
    carer->add(war->createMemento());
}
void DesignModeCommand::undo() {
    war_->restore(carer->retrieve());
}

RealModeCommand::RealModeCommand() {}
void RealModeCommand::execute() {}

//what i was thinking

PauseCommand::PauseCommand(War* w, Caretaker* c) : war(w) , carer(c) {}
void PauseCommand::execute() {
    carer->add(war->stop());
}

ResumeCommand::ResumeCommand(War* w, Caretaker* c) : war(w) , carer(c) {}
void ResumeCommand::execute() {
    war->resume();
}

UndoCommand::UndoCommand(War* w, Caretaker* c) : war(w) , carer(c) {}
void UndoCommand::execute() {
    war->restore(carer->retrieve());
}
