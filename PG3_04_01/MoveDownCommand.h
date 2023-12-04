#pragma once
#include "Command/ICommand/ICommand.h"
class MoveDownCommand : public ICommand {

public:
	void Execution(Player& player) override;

};
