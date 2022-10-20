#include "Command.h"
#include <iostream>
using namespace std;

int main() {

    Command* c = new DesignModeCommand();
    c->execute();
    return 0;
}