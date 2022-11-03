#include "LaunchReanactment.h"
#include <iostream>
#include "ResumeCommand.h"
#include "PauseCommand.h"
#include "UndoCommand.h"
using namespace std;

LaunchReanactment::LaunchReanactment(Command* res, Command* paus, Command* undo) : ResumeCommand_(res), PauseCommand_(paus), UndoCommand_(undo), paused(true) {}
LaunchReanactment::LaunchReanactment(War* war, Caretaker* carer) {
    ResumeCommand_ = new ResumeCommand(war,carer);
    PauseCommand_ = new PauseCommand(war,carer);
    UndoCommand_ = new UndoCommand(war,carer);
    paused = true;
}
bool LaunchReanactment::switch_() {
    if (paused) {
        flipDown();
    } else {
        flipUp();
    }
    paused = !paused;
    return paused;
}

void LaunchReanactment::flipDown() {
    PauseCommand_->execute();
}

void LaunchReanactment::flipUp() {
    ResumeCommand_->execute();
}

void LaunchReanactment::Undo() {
    if (paused) {
        UndoCommand_->execute();
    }
}

LaunchReanactment::~LaunchReanactment() {
    delete ResumeCommand_;
    delete PauseCommand_;
    delete UndoCommand_;
}
