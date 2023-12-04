#pragma once
#include "Command/ICommand/ICommand.h"

class InputHandle
{
public: 
	ICommand* HandleInput();

	void AssignMoveLeftCommand2PressKeyW();
	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoveLeftCommand2PressKeyS();
	void AssignMoveLeftCommand2PressKeyD();

private:
	ICommand* pressKeyW_;
	ICommand* pressKeyA_;
	ICommand* pressKeyS_;
	ICommand* pressKeyD_;

};

