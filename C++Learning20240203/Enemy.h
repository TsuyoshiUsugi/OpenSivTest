#pragma once
#include "GameObject.h"

class Player;

class Enemy : public IGameObject
{
private:
	const Texture _emoji{ U"👾"_emoji };
	double _speed = 1;
	bool _isFacingRight = true;
	std::shared_ptr<Player> _player;
public:
	Enemy(Vector2 pos, std::shared_ptr<Player> player)
	{
		_pos = pos;
		_player = player;
	};
	void Update() override;
	void Draw() override;
	Vector2 GetPos() { return _pos; };
};

