#ifndef MEMENTO_H
#define MEMENTO_H
#include "State.h"

class Memento {
    friend class War
    private:
        State state_;
        State getState();
    public:
        Memento(State);
        
};

#endif