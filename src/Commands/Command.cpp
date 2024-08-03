#include "Command.h"

std::string Command::toString() { return "yes"; }

Command::Command(std::string *args, int n) : args(args), n(n) { }

Command::~Command() { }
