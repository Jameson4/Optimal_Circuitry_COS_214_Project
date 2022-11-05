#ifndef MEMENTO_H
#define MEMENTO_H
#include "State.h"

/**
 * @brief stores internal state of War
 * 
 */
class Memento {
    friend class War
    private:
        State state_;
        State getState();
    public:
        Memento(State);
        
};

#endif
