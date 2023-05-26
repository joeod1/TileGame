#include "Vector2.h"

#include <math.h>

Vector2::Vector2() {
}

Vector2::Vector2(float x, float y) { this->x = x; this->y = y; }
Vector2::Vector2(float x, float y, float m) { this->x = x; this->y = y; this->m = m;  }

Vector2 Vector2::getUnitVector() {
	float dist = getMagnitude();
	return Vector2(
		this->x / dist,
		this->y / dist,
		dist
	);
}

float Vector2::getMagnitude() {
	Vector2 a =
		Vector2(
			fabs(this->x),
			fabs(this->y)
		);
	return (a.x > a.y) ? (a.x + 0.337 * a.y) : (a.y + 0.337 * a.x);
}

Vector2 Vector2::operator+(Vector2 first) {
	return Vector2(this->x + first.x,
		this->y + first.y, this->m);
}

Vector2 Vector2::operator-(Vector2 first) {
	return Vector2(this->x - first.x,
		this->y - first.y, this->m);
}

Vector2 Vector2::operator*(Vector2 first) {
	return Vector2(this->x * first.x,
		this->y * first.y, this->m);
}

Vector2 Vector2::operator/(Vector2 first) {
	return Vector2(this->x / first.x,
		this->y / first.y, this->m);
}

Vector2 Vector2::operator+(float first) {
	return Vector2(this->x + first,
		this->y + first, this->m);
}

Vector2 Vector2::operator-(float first) {
	return Vector2(this->x - first,
		this->y - first, this->m);
}

Vector2 Vector2::operator*(float first) {
	return Vector2(this->x * first,
		this->y * first, this->m);
}

Vector2 Vector2::operator/(float first) {
	return Vector2(this->x / first,
		this->y / first, this->m);
}

