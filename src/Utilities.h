#include <string>

class Utilities
{
public:
	static std::string *char_arr_to_string(char** from, std::string* to, int n);
	static std::string to_lower(std::string str);
};
