#include "Caretaker.h"
#include "Memento.h"
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
void Caretaker::add(Memento mem) {
    list.push_back(mem);
}

/**
 * @brief returns most recently stored memento and removes it from the list
 * 
 * @return Memento 
 */
Memento Caretaker::retrieve() {
    Memento temp = *list.end();
    list.pop_back();
    return temp;
}
