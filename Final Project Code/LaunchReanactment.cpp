#include "LaunchReanactment.h"
#include <iostream>
#include "ResumeCommand.h"
#include "PauseCommand.h"
#include "UndoCommand.h"
using namespace std;
/**
 * @brief Construct a new Launch Reanactment:: Launch Reanactment object
 * 
 * @param res 
 * @param paus 
 * @param undo 
 */
LaunchReanactment::LaunchReanactment(Command* res, Command* paus, Command* undo) : ResumeCommand_(res), PauseCommand_(paus), UndoCommand_(undo), paused(true) {}

/**
 * @brief Construct a new Launch Reanactment:: Launch Reanactment object
 * 
 * @param war 
 * @param carer 
 */
LaunchReanactment::LaunchReanactment(War* war, Caretaker* carer) {
    ResumeCommand_ = new ResumeCommand(war,carer);
    PauseCommand_ = new PauseCommand(war,carer);
    UndoCommand_ = new UndoCommand(war,carer);
    paused = true;
}

/**
 * @brief Destroy the Launch Reanactment:: Launch Reanactment object
 * 
 */
LaunchReanactment::~LaunchReanactment() {
    delete ResumeCommand_;
    delete PauseCommand_;
    delete UndoCommand_;
}

/**
 * @brief asks command to carry out a request based on [paused] value
 * 
 * 
 * @return true 
 * @return false 
 */
bool LaunchReanactment::switch_() {
    if (paused) {
        flipDown();
    } else {
        flipUp();
    }
    paused = !paused;
    return paused;
}


/**
 * @brief asks PauseCommand to execute
 * @link PauseCommand::execute()
 * 
 */
void LaunchReanactment::flipDown() {
    PauseCommand_->execute();
}


/**
 * @brief asks ResumeCommand to execute
 * @link ResumeCommand::execute()
 * 
 */
void LaunchReanactment::flipUp() {
    ResumeCommand_->execute();
}


/**
 * @brief asks UndoCommand to execute
 * @link UndoCommand::execute()
 * 
 */
void LaunchReanactment::Undo() {
    if (!paused) //since paused switched
    UndoCommand_->execute();
}
