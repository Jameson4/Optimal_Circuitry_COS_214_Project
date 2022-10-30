#include "LaunchReanactment.h"
#include <iostream>
#include "Command.h"
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
    UndoCommand_->execute();
}

void LaunchReanactment::Pause() {
    if (!paused) {
        paused = true;
        PauseCommand_->execute();
    }
}

void LaunchReanactment::Resume() {
    if (paused) {
        paused = false;
        ResumeCommand_->execute();
    }
}
