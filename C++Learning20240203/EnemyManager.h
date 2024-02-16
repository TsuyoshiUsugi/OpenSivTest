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
	//生成する範囲の最大値。プレイヤーの座標を中心に＋－この値の範囲で生成される
	Vector2 _generateDis = Vector2(600, 500);
	//生成する範囲から除外する領域
	Vector2 _excludedRegion = Vector2(400, 300);

public:
	EnemyManager(std::shared_ptr<Player> player);
	~EnemyManager();
	void Update() override;
	Vector2 GetRandomPos();
	bool IsInExcludedRegion(int num, int exclude);
	void Draw() override;
};

