#ifndef RESUMECOMMAND_H
#define RESUMECOMMAND_H
#include "Command.h"


/**
 * @brief invokes resuming operation on War
 * 
 */
class ResumeCommand : public Command {
    private:
        War* war;
        Caretaker* carer;
    public:
        ResumeCommand(War*,Caretaker*);
        ~ResumeCommand();
        void execute();
};

#endif