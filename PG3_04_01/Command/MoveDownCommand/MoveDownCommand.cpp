#include "MoveDownCommand.h"
#include "Player/Player.h"

void MoveDownCommand::Execution(Player& player)
{
	player.MoveDown();
}
