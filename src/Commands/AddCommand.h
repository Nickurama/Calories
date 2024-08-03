#pragma once
#include "Command.h"

class AddCommand : public Command
{
private:
public:
	using Command::Command;
	static const std::string STR;
	void execute() const override;
	std::string toString() override;
};
