#include "LaunchReanactment.h"
#include <iostream>
#include "Command.h"
using namespace std;

LaunchReanactment::LaunchReanactment(Command* up, Command* down) : upCommand(up), downCommand(down) {}
void LaunchReanactment::switch_() {
    if (up) {
        flipDown();
    } else {
        flipUp();
    }
}

void LaunchReanactment::flipDown() {
    downCommand->execute();
}

void LaunchReanactment::flipUp() {
    upCommand->execute();
}