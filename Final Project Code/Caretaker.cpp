#include "Caretaker.h"
#include "Memento.h"
using namespace std;

Caretaker::Caretaker() {}

void Caretaker::add(Memento mem) {
    list.push_back(mem);
}

Memento Caretaker::retrieve() {
    Memento temp = list.end();
    list.pop_back();
    return temp;
}