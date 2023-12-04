#pragma once
#include <Vector2.h>

/// <summary>
/// 
/// </summary>
class Player
{

private:

	Vector2 position_;
	float speed_;

public:

	Player();

	void Initialize();
	void Update();
	void Draw();

	void MoveRight();
	void MoveLeft();
	void MoveUp();
	void MoveDown();

};

