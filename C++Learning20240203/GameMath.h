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

	Vector2 Normalized(const Vector2& other)
	{
		if (other.X != 0 && other.Y != 0) {
			return Vector2(X / other.X, Y / other.Y);
		}
		else {
			// ゼロで割り算を避けるため、特別な処理が必要な場合にこちらを選択するか、
			// エラー処理を行うか、ゼロベクトルを返すかなど、具体的な要件に合わせて対応してください。
			// ここではゼロベクトルを返す例としています。
			return Vector2(0, 0);
		}
	}
};
