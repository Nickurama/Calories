#include "Main.h"
#include "Calories.h"
#include "Utilities.h"

int main(int arg_num, char** args)
{
	std::string str_args[arg_num - 1];
	Utilities::char_arr_to_string(args + 1, str_args, arg_num - 1);
	Calories::process_args(str_args, arg_num - 1);

	return 0;
}
