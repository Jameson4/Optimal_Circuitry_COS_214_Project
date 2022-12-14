#ifndef UNDOCOMMAND_H
#define UNDOCOMMAND_H
#include "Command.h"


/**
 * @brief invokes undo operation on War
 * 
 */
class UndoCommand : public Command {
    private:
        War* war;
        Caretaker* carer;
    public:
        UndoCommand(War*,Caretaker*);
        ~UndoCommand();
        void execute();
};


#endif