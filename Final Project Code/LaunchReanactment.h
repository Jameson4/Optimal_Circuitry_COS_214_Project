#ifndef LAUNCHREANACTMENT_H
#define LAUNCHREANACTMENT_H
#include "Command.h"

class LaunchReanactment
{
    private:
        Command* upCommand;
        Command* downCommand;
        bool up;
    public:
        LaunchReanactment(Command*,Command*);
        void switch_();
        void flipUp();
        void flipDown();
};




#endif