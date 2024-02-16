#pragma once
#include "GameObject.h"
#include "Player.h"

class Enemy;

class EnemyManager : public IGameObject
{
private:
	std::vector<std::shared_ptr<Enemy>> _enemies;
	float _currentTimer = 0;
	float _generateInterval = 2.0;
	std::shared_ptr<Player> _player;

	EnemyManager(std::shared_ptr<Player> player)
	{
		_player = player;
	}
public:
	EnemyManager();
	~EnemyManager();
	void Update() override;
	void Draw() override;
};

