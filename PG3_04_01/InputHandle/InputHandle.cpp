#include "InputHandle.h"
#include "Command/MoveLeftCommand/MoveLeftCommand.h"
#include "Command/MoveRightCommand/MoveRightCommand.h"
#include "MoveUpCommand.h"
#include "MoveDownCommand.h"
#include "MoveUpCommand.h"
#include "MoveDownCommand.h"
#include <Novice.h>

ICommand* InputHandle::HandleInput()
{
	if (Novice::CheckHitKey(DIK_W)) {
		return pressKeyW_;
	}
	if (Novice::CheckHitKey(DIK_A)) {
		return pressKeyA_;
	}
	if (Novice::CheckHitKey(DIK_S)) {
		return pressKeyS_;
	}
	if (Novice::CheckHitKey(DIK_D)) {
		return pressKeyD_;
	}
	
	return nullptr;
}

void InputHandle::AssignMoveLeftCommand2PressKeyW()
{
	ICommand* command = new MoveUpCommand();
	this->pressKeyW_ = command;
}

void InputHandle::AssignMoveLeftCommand2PressKeyA() {
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA_ = command;
}

void InputHandle::AssignMoveLeftCommand2PressKeyS()
{
	ICommand* command = new MoveDownCommand();
	this->pressKeyS_ = command;
}

void InputHandle::AssignMoveLeftCommand2PressKeyD()
{
	ICommand* command = new MoveRightCommand();
	this->pressKeyD_ = command;
}

