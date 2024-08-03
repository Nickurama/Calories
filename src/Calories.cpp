#include "Calories.h"

const std::string HELP_STR = "help";
const std::string ADD_STR = "add";

void Calories::process_args(std::string *args, int n)
{
	Command *cmd = cmdGen(args, n);

	std::cout << cmd->toString() << std::endl;
	cmd->execute();
	delete cmd;
}

Command *Calories::cmdGen(std::string *args, int n)
{
	Command *cmd;
	if (n < 1 || args[0].empty())
		cmd = new HelpCommand(args, n);
	else if (args[0] == HelpCommand::STR)
		cmd = new HelpCommand(args, n);
	else if (args[0] == AddCommand::STR)
		cmd = new AddCommand(args, n);
	return cmd;
}
