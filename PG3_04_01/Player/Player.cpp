#include "Player.h"
#include <Novice.h>
#include <cstdint>

Player::Player()
{
}

void Player::Initialize()
{
	position_ = { 100.0f, 360.0f};
	speed_ = 5.0f;
}

void Player::Update()
{
	if (position_.x <= 50.0f) {
		position_.x = 50.0f;
	}
	if (position_.x >= 1230.0f) {
		position_.x = 1230.0f;
	}
	if (position_.y <= 50.0f) {
		position_.y = 50.0f;
	}
	if (position_.y >= 680.0f) {
		position_.y = 680.0f;
	}
}

void Player::Draw()
{
	int radius = 50;
	Novice::DrawEllipse(static_cast<int32_t>(position_.x), static_cast<int32_t>(position_.y), radius, radius, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight()
{
	this->position_.x += this->speed_;
}

void Player::MoveLeft()
{
	this->position_.x -= this->speed_;
}

void Player::MoveUp()
{
	this->position_.y -= this->speed_;
}

void Player::MoveDown()
{
	this->position_.y += this->speed_;
}
