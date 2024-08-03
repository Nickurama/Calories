#pragma once
#include <iostream>
#include "Command.h"
#include "../TerminalColors.h"

class HelpCommand : public Command
{
private:
	const std::string CMD_COLOR;
	const std::string ARG_COLOR;
	const std::string TXT_COLOR;
	const std::string RESET;
public:
	using Command::Command;
	static const std::string STR;
	void execute() const override;
	std::string toString() override;
};
