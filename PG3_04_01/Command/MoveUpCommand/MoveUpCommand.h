#pragma once
#include "Command/ICommand/ICommand.h"
class MoveUpCommand : public ICommand {

public:
	void Execution(Player& player) override;

};
