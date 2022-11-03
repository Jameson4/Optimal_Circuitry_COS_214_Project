#ifndef LAUNCHREANACTMENT_H
#define LAUNCHREANACTMENT_H
#include "Command.h"
#include "War.h"
#include "Caretaker.h"

class LaunchReanactment
{
    private:
        Command* ResumeCommand_;
        Command* PauseCommand_;
        Command* UndoCommand_;
        bool paused;
    public:
        LaunchReanactment(Command*,Command*,Command*);
        LaunchReanactment(War*,Caretaker*);
        ~LaunchReanactment();
        bool switch_();
        void flipUp();
        void flipDown();
        void Undo();
        void Pause();
        void Resume();
};




#endif
