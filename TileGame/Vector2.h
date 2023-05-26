#pragma once
class Vector2
{
public:
	float x = 0, y = 0, m = 0;
	Vector2();
	Vector2(float, float);
	Vector2(float, float, float);
	Vector2 getUnitVector();
	float getMagnitude();
	Vector2 operator+(Vector2);
	Vector2 operator-(Vector2);
	Vector2 operator*(Vector2);
	Vector2 operator/(Vector2);
	Vector2 operator+(float);
	Vector2 operator-(float);
	Vector2 operator*(float);
	Vector2 operator/(float);
};

