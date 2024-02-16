#include "stdafx.h"
#include "Enemy.h"
#include "Player.h"
# include <Siv3D.hpp>

void Enemy::Update()
{
	auto dir = _player->GetPos() - _pos;
	_pos += Vector2::Normalized(dir) * _speed;
	//_pos += Vector2::Normalized(dir) * _speed;
}

void Enemy::Draw()
{
	_emoji.scaled(0.75).mirrored(_isFacingRight).drawAt(_pos.X, _pos.Y);

	Print << _player->GetPos().X;
	Print << _player->GetPos().Y;
	//DrawText(font, 30, text, Vec2{ 40, 40 }, Palette::Skyblue, t, TextEffect1, 0.1);
}
