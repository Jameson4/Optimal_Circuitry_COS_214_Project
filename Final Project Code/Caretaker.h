#ifndef CARETAKER_H
#define CARETAKER_H
#include "Memento.h"
#include <list>

class Caretaker {
    private:
        list<Memento> list;
    public:
        Caretaker();
        void add(Memento);
        Memento retrieve();

};

#endif