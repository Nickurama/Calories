#include <iostream>
#include <string>
#include <ctime>

class Calories
{
	public:
		static void process_args(std::string* args, int n);
		static void help();
		static void add_entry(struct tm datetime, int calories);
};
