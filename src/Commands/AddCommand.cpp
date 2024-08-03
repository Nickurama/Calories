#include <iostream>
#include "../TerminalColors.h"
#include "AddCommand.h"

const std::string AddCommand::STR = "add";

void AddCommand::execute() const
{
	// std::string command = Utilities::to_lower(args[0]);
	// if (command == HELP_STR)
	// 	help();
	// else if (command == ADD_STR)
	// {
		// if (n < 2)
		// {
		// 	std::cout << "Error adding entry: missing argument." << std::endl;
		// 	return;
		// }
		//
		// time_t timestamp = time(NULL);
		// struct tm datetime = *localtime(&timestamp);
		// add_entry(datetime, std::stoi(args[1]));
	// }
}

void add_entry(struct tm datetime, int calories) // date, calories
{
	char date[11];
	strftime(date, 11, "%d/%m/%Y", &datetime);
	std::cout << TerminalColors::fg_gray << "[" << date << "] " << TerminalColors::fg_green << "Adding " << TerminalColors::fg_white << calories << TerminalColors::fg_bold_green << "kcal.\033[0m" << std::endl;
	std::cout << "year: "<< datetime.tm_year + 1900 << std::endl;
	std::cout << "month: "<< datetime.tm_mon << std::endl;
	std::cout << "day: "<< datetime.tm_mday << std::endl;
	std::cout << "hours: "<< datetime.tm_hour << std::endl;
	std::cout << "minutes: "<< datetime.tm_min << std::endl;
	std::cout << "seconds: "<< datetime.tm_sec << std::endl;

	int size = 100;
	char output[size];
	strftime(output, size, "%d/%m/%Y %H:%M:%S (%a, %d %B of %Y)", &datetime);
	std::cout << output << std::endl;
}

std::string AddCommand::toString() { return AddCommand::STR; }
