#include "calories.h"
#include "utilities.h"
#include "colors.h"

const std::string HELP_STR = "help";
const std::string ADD_STR = "add";



void Calories::help()
{
	std::cout << "WIP help page." << std::endl;
}

void Calories::add_entry(struct tm datetime, int calories) // date, calories
{
	char date[11];
	strftime(date, 11, "%d/%m/%Y", &datetime);
	std::cout << Colors::fg_gray << "[" << date << "] " << Colors::fg_green << "Adding " << Colors::fg_white << calories << Colors::fg_bold_green << "kcal.\033[0m" << std::endl;
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

void Calories::process_args(std::string* args, int n)
{
	std::string command = Utilities::to_lower(args[0]);
	if (n < 1)
		help();
	else if (command == HELP_STR)
		help();
	else if (command == ADD_STR)
	{
		if (n < 2)
		{
			std::cout << "Error adding entry: missing argument." << std::endl;
			return;
		}

		time_t timestamp = time(NULL);
		struct tm datetime = *localtime(&timestamp);
		add_entry(datetime, std::stoi(args[1]));
	}
}
