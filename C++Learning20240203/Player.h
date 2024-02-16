#pragma once
#include "GameMath.h"
#include "GameObject.h"

class Player : public IGameObject
{
private:
	// 絵文字からテクスチャを作成する | Create a texture from an emoji
	const Texture _emoji{ U"🦖"_emoji };
	// プレイヤーの移動スピード | Player's movement speed
	double _speed = 200.0;
	// プレイヤーが右を向いているか | Whether player is facing right
	bool _isFacingRight = true;
public:
	Player(int posx, int posy);
	Vector2 GetPos() { return _pos; };
	void Update() override;
	void Draw() override;
};

