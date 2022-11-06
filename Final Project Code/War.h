#ifndef WAR_H
#define WAR_H
#include "State.h"
#include "Memento.h"
#include <string>
using namespace std;

///just a placeholder
class War {
    friend class Memento;
    private:
        bool war;
        State* state_;
    public:
        War();
        War(State);
        ~War() {}
        void stop();
        Memento* resume();
        Memento* createMemento();
        void restore(Memento*);
        void step();
        State* getState();
};

#endif
