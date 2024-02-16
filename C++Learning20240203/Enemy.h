#pragma once
#include "GameObject.h"

class Player;

class Enemy : public IGameObject
{
private:
	const Texture _emoji{ U"👾"_emoji };
	double _speed = 100.0;
	bool _isFacingRight = true;
	std::shared_ptr<Player> _player;
public:
	Enemy(int posx, int posy, std::shared_ptr<Player> player)
	{
		_pos = Vector2(posx, posy);
		_player = player;
	};
	void Update() override;
	void Draw() override;
	Vector2 GetPos() { return _pos; };
};

