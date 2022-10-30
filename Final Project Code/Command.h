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
class PauseCommand : public Command {
    private:
        War* war;
        Caretaker* carer;
    public:
        PauseCommand(War*,Caretaker*);
        void execute();
};

class ResumeCommand : public Command {
    private:
        War* war;
        Caretaker* carer;
    public:
        ResumeCommand(War*,Caretaker*);
        void execute();
};

class UndoCommand : public Command {
    private:
        War* war;
        Caretaker* carer;
    public:
        UndoCommand(War*,Caretaker*);
        void execute();
};


#endif
