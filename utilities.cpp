#include "utilities.h"

std::string* Utilities::char_arr_to_string(char** from, std::string* to, int n)
{
	for (int i = 0; i < n; i++)
		to[i] = from[i];
	return to;
}

std::string Utilities::to_lower(std::string str)
{
	std::string result;
	for (int i = 0; i < str.length(); i++)
		result.push_back(std::tolower(str[i]));
	return result;
}
