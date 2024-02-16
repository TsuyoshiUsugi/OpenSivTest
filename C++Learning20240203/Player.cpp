#include "stdafx.h"
#include "Player.h"

Player::Player(Vector2 pos)
{
	// プレイヤーの初期位置 | Player's initial position
	_pos = pos;
}

void Player::Update()
{
	// 左キーが押されていたら | If left key is pressed
	if (KeyLeft.pressed())
	{
		// プレイヤーが左に移動する | Player moves left
		_pos = Vector2(Max((_pos.X - _speed * Scene::DeltaTime()), 60.0), _pos.Y);
		_isFacingRight = false;
	}

	// 右キーが押されていたら | If right key is pressed
	if (KeyRight.pressed())
	{
		// プレイヤーが右に移動する | Player moves right
		_pos = Vector2(Min((_pos.X + _speed * Scene::DeltaTime()), 740.0), _pos.Y);
		_isFacingRight = true;
	}

	// 上キーが押されていたら | If right key is pressed
	if (KeyUp.pressed())
	{
		_pos = Vector2(_pos.X, Max((_pos.Y - _speed * Scene::DeltaTime()), 0.0));
		_isFacingRight = true;
	}

	// 下キーが押されていたら | If right key is pressed
	if (KeyDown.pressed())
	{
		_pos = Vector2(_pos.X, Min((_pos.Y + _speed * Scene::DeltaTime()), 540.0));
		_isFacingRight = true;
	}
}

void Player::Draw()
{
	// プレイヤーを描く | Draw the player
	_emoji.scaled(0.75).mirrored(_isFacingRight).drawAt(_pos.X, _pos.Y);
}
