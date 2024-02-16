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
	Vector2 _generateDis = Vector2(400, 300);

public:
	EnemyManager(std::shared_ptr<Player> player);
	~EnemyManager();
	void Update() override;
	Vector2 GetRandomPos();
	void Draw() override;
};

