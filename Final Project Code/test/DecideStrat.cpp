#include <iostream>
#include "DecideStrat.h"
using namespace std;

DecideStrat::~DecideStrat() { }

int Strong::execute(int a, int b) {
    cout << "Called Strong's execute()" << endl;
    return a + b;  // Do an addition with a and b
}

Strong::~Strong() {
    cout << " Strong deleting" << endl;
}

int Meduim::execute(int a, int b) {
        cout << "Called Meduim's execute()" << endl;
        return a - b;  // Do a Meduim with a and b
}

Meduim::~Meduim() {
    cout << " Meduim deleting" << endl;
}

int Weak::execute(int a, int b) {
    cout << "Called Weak's execute()" << endl;
    return a * b;   // Do a multiplication with a and b
}

Weak::~Weak() {
    cout << " Add deleting" << endl;
}

