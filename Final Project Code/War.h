#ifndef WAR_H
#define WAR_H
#include "State.h"
#include "Memento.h"

//just a placeholder
class War {
    friend class Memento
    private:
        bool war;
        State* state_;
    public:
        War();
        War(State);
        Memento stop();
        void resume();
        Memento createMemento();
        void restore(Memento);
        void step(std::string);
};

#endif
