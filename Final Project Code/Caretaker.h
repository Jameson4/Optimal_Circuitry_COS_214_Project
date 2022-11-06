#ifndef CARETAKER_H
#define CARETAKER_H
#include "Memento.h"
#include <list>

/**
 * @brief Responsible for safekeeping of a mementos internal state
 * 
 */
class Caretaker {
    private:
        std::list<Memento*> list;
    public:
        Caretaker();
        void add(Memento*);
        Memento* retrieve();
        void pop();

};

#endif
