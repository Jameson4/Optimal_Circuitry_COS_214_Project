#include "Command.h"
#include <iostream>
using namespace std;


/**
 * @brief Construct a new Design Mode Command:: Design Mode Command object
 * 
 * @param w 
 */
DesignModeCommand::DesignModeCommand(War* w) : war_(w) {
    carer = new Caretaker();
}

/**
 * @brief Destroy the Design Mode Command:: Design Mode Command object
 * 
 */
DesignModeCommand::~DesignModeCommand() {
    delete carer;
    war_ = 0;
}


void DesignModeCommand::execute() {
    while (true) {
        carer->add(war_->resume());
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
            war_->step();
        }
    }
}
void DesignModeCommand::pause() {
    war_->stop();
}
void DesignModeCommand::undo() {
    war_->restore(carer->retrieve());
}