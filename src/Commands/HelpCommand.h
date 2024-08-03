#include "Command.h"

class HelpCommand : public Command
{
private:
	static const std::string STR;
	const std::string CMD_COLOR;
	const std::string ARG_COLOR;
	const std::string TXT_COLOR;
	const std::string RESET;
public:
	using Command::Command;
	void execute() const override;
	std::string toString() override;
};
