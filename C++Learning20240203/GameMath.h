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
	Vector2(int x, int y)
	{
		X = x;
		Y = y;
	}
	int X;
	int Y;

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

	Vector2 Normalized()
	{
		return Vector2(X / (X + Y), Y / (X + Y));
	}
};
