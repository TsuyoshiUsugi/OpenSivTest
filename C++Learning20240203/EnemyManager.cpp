#include "stdafx.h"
#include "EnemyManager.h"
#include "Enemy.h"
#include <random>

EnemyManager::EnemyManager(std::shared_ptr<Player> player)
{
	_player = player;
}

EnemyManager::~EnemyManager()
{
}

void EnemyManager::Update()
{
	//インターバルを経過したら敵を生成する
	_currentTimer += Scene::DeltaTime();
	if (_currentTimer > _generateInterval)
	{
		_currentTimer = 0;
		//敵を生成
		std::shared_ptr<Enemy> enemy = std::make_shared<Enemy>(GetRandomPos(), _player);
		_enemies.push_back(enemy);
	}

	//敵を更新
	for (auto& enemy : _enemies)
	{
		enemy->Update();
	}
}

Vector2 EnemyManager::GetRandomPos()
{
	// 乱数生成器を作成
	std::random_device rd;  // ハードウェアやOSの乱数生成機能を使用するためのデバイス
	std::mt19937 mt(rd());  // メルセンヌ・ツイスタ法に基づく擬似乱数生成器
	// 乱数の範囲を指定
	std::uniform_int_distribution<int> xPos(_player->GetPos().X - _generateDis.X, _player->GetPos().X + _generateDis.X);
	std::uniform_int_distribution<int> yPos(_player->GetPos().Y - _generateDis.Y, _player->GetPos().Y + _generateDis.Y);
	return Vector2(xPos(mt), yPos(mt));
}

void EnemyManager::Draw()
{
	for (auto& enemy : _enemies)
	{
		enemy->Draw();
	}
}
