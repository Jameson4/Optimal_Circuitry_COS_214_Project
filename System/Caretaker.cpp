#include "Caretaker.h"
#include "Memento.h"
#include <iostream>
using namespace std;


/**
 * @brief Construct a new Caretaker:: Caretaker object
 * 
 */
Caretaker::Caretaker() {}


/**
 * @brief adds Memento object to list
 * 
 * @param mem 
 */
void Caretaker::add(Memento* mem) {
    list.push_back(mem);
}

/**
 * @brief returns most recently stored memento and removes it from the list
 * 
 * @return Memento 
 */
Memento* Caretaker::retrieve() {
    if (list.empty()) {
        return NULL;
    }
    Memento* temp = list.back();
    return temp;
}

/**
 * @brief to avoid seg fault such that the memento isnt destroyed before war can War::restore(Memento* mem), used in UndoCommand::execute()
 * 
 */
void Caretaker::pop() {
    list.pop_back();
}
