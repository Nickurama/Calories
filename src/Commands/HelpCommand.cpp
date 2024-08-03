#include <iostream>
#include "../TerminalColors.h"
#include "HelpCommand.h"

const std::string HelpCommand::STR = "help";

#define CMD_COLOR TerminalColors::fg_cyan
#define ARG_COLOR TerminalColors::fg_gray
#define TXT_COLOR TerminalColors::reset
#define RESET TerminalColors::reset

void HelpCommand::execute() const
{
	std::cout << CMD_COLOR << "help" << TXT_COLOR << " - displays help." << RESET << std::endl;
	std::cout << CMD_COLOR << "add" << ARG_COLOR << " [calories]" << TXT_COLOR << " - adds calories consumed to the current day." << RESET << std::endl;
	std::cout << CMD_COLOR << "add" << ARG_COLOR << " [calories] [date in dd/mm/yy]" << TXT_COLOR << " - adds calories consumed to the current day." << RESET << std::endl;
	std::cout << CMD_COLOR << "set" << ARG_COLOR << " [calories] [date in dd/mm/yy]" << TXT_COLOR << "- sets the ammount of calories consumed for a day" << RESET << std::endl;
	std::cout << CMD_COLOR << "stats" << TXT_COLOR << " - checks your stats" << RESET << std::endl;
}

std::string HelpCommand::toString() { return STR; }
