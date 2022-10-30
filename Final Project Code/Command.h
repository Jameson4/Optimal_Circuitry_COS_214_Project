#ifndef COMMAND_H
#define COMMAND_H
#include "Memento.h"
#include "War.h"
#include "Caretaker.h"

class Command {
    public:
        virtual void execute() =0;
};

class DesignModeCommand : public Command {
    private:
        War* war_;
        bool busyState;
        Caretaker* carer;

    public:
        DesignModeCommand(War*);
        void execute();
        void undo();
        void pause();

};

class RealModeCommand : public Command {
    public:
        RealModeCommand();
        void execute();
};

//what i was thinking

PauseCommand::PauseCommand(War* w, Caretaker* c) : war(w) , carer(c) {}
void PauseCommand::execute() {
    carer->add(war->stop());
}

ResumeCommand::ResumeCommand(War* w, Caretaker* c) : war(w) , carer(c) {}
void ResumeCommand::execute() {
    war->resume();
}

UndoCommand::UndoCommand(War* w, Caretaker* c) : war(w) , carer(c) {}
void UndoCommand::execute() {
    war->restore(carer->retrieve());
}


#endif
