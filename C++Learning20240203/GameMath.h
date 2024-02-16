#pragma once
class GameMath
{

};

struct Vector2
{
public:
	Vector2()
	{
		X = 0;
		Y = 0;
	}
	Vector2(float x, float y)
	{
		X = x;
		Y = y;
	}
	float X;
	float Y;

	Vector2 operator+(const Vector2& other)
	{
		return Vector2(X + other.X, Y + other.Y);
	}

	Vector2 operator-(const Vector2& other)
	{
		return Vector2(X - other.X, Y - other.Y);
	}

	Vector2 operator/(const Vector2& other)
	{
		return Vector2(X / other.X, Y / other.Y);
	}

	Vector2 operator*(const int& other)
	{
		return Vector2(X * other, Y * other);
	}

	Vector2 operator+=(const Vector2& other)
	{
		X += other.X;
		Y += other.Y;
		return *this;
	}

	Vector2 operator-=(const Vector2& other)
	{
		X -= other.X;
		Y -= other.Y;
		return *this;
	}

	static Vector2 Normalized(const Vector2& other)
	{
		float length = sqrt(other.X * other.X + other.Y * other.Y);
		return Vector2(other.X / length, other.Y / length);
	}

	
};
