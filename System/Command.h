#ifndef COMMAND_H
#define COMMAND_H
#include "Memento.h"
#include "War.h"
#include "Caretaker.h"


/**
 * @brief Command: interface for executing operations, defines binding between recievers and operations
 * 
 */
class Command {
    public:
        virtual void execute() =0;
        virtual ~Command() {};
};

/**
 * @brief 
 * 
 */
class DesignModeCommand : public Command {
    private:
        War* war_;
        bool busyState;
        Caretaker* carer;

    public:
        DesignModeCommand(War*);
        ~DesignModeCommand();
        void execute();
        void undo();
        void pause();

};




#endif