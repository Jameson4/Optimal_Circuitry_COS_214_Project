#ifndef PAUSECOMMAND_H
#define PAUSECOMMAND_H
#include "Command.h"

class PauseCommand : public Command {
    private:
        War* war;
        Caretaker* carer;
    public:
        PauseCommand(War*,Caretaker*);
        ~PauseCommand();
        void execute();
};

#endif