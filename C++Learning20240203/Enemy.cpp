#include "stdafx.h"
#include "Enemy.h"
#include "Player.h"

void Enemy::Update()
{
	auto dir = _player->GetPos() - _pos;
	_pos += dir * _speed;
}

void Enemy::Draw()
{
	_emoji.scaled(0.75).mirrored(_isFacingRight).drawAt(_pos.X, _pos.Y);
}
