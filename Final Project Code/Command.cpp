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
