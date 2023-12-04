#include "MoveUpCommand.h"
#include "Player/Player.h"

void MoveUpCommand::Execution(Player& player)
{
	player.MoveUp();
}
