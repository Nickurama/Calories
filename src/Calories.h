#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "Commands/HelpCommand.h"
#include "Commands/AddCommand.h"

class Calories
{
public:
	static void process_args(std::string *args, int n);
	static Command *cmdGen(std::string *args, int n);
};
