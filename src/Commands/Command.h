#include <string>

class Command
{
protected:
	std::string *args;
	int n;
public:
	Command(std::string *args, int n);
	virtual void execute() const = 0;
	virtual std::string toString() = 0;
	virtual ~Command();
};
