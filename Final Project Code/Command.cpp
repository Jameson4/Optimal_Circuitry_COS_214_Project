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
            carer.add(pause());
        } else if(c == "undo") {
            war_->restore(undo(carer.retrieve()))
        }
        else if(c == "end") {
            return;
        }else {
            war_->step(c);
        }
    }
}
Memento DesignModeCommand::pause() {
    war_->pause();
    return war_->createMemento();
}
void DesignModeCommand::undo(Memento mem) {
    war_->restore(mem);
}

RealModeCommand::RealModeCommand() {}
void RealModeCommand::execute() {}