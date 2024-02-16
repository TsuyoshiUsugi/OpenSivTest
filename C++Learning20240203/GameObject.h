#pragma once
#include "GameMath.h"

class IGameObject
{
protected:
	Vector2 _pos;
public:
	virtual ~IGameObject() {};
	virtual void Update() {};
	virtual void Draw() {};
};

