#include <cmath> 

#include "include/vector2.hpp"

namespace fgmath {
	const Vector2 Vector2::down(0, -1);
	const Vector2 Vector2::up(0, 1);
	const Vector2 Vector2::left(-1, 0);
	const Vector2 Vector2::right(1, 0);
	const Vector2 Vector2::one(1, 1);

	Vector2::Vector2() : x(0.0), y(0.0) {};
	Vector2::~Vector2() {};
	Vector2::Vector2(float uX, float uY) : x(uX), y(uY) {};

	void Vector2::operator+=(const Vector2& v)
	{
		x += v.x;
		y += v.y;
	}

	void Vector2::operator-=(const Vector2& v)
	{
		x -= v.x;
		y -= v.y;
	}

	void Vector2::operator*=(const float s)
	{
		x *= s;
		y *= s;
	}

	void Vector2::operator/=(const float s)
	{
		x = x / s;
		y = y / s;
	}

	Vector2 Vector2::operator+(const Vector2& v) const
	{
		return Vector2(x + v.x, y + v.y);
	}

	Vector2 Vector2::operator-(const Vector2& v) const
	{
		return Vector2(x - v.x, y - v.y);
	}

	Vector2 Vector2::normalized() const {
		float mag = magnitude();
		if (mag > 0.0f) {
			return Vector2(x / mag, y / mag);
		}
		return *this;
	}

	void Vector2::normalize() {
		float mag = magnitude();
		if (mag > 0.0f) {
			x /= mag;
			y /= mag;
		}
	}
	bool Vector2::operator==(const Vector2& other) const {
		return (x == other.x) && (y == other.y);
	}

	bool Vector2::operator!=(const Vector2& other) const {
		return !(*this == other);
	}

	float Vector2::magnitude() const
	{
		return std::sqrt(x * x + y * y);
	}

	float Vector2::distance(const Vector2& a, const Vector2& b) {
		float dx = b.x - a.x;
		float dy = b.y - a.y;
		return std::sqrt(dx * dx + dy * dy);
	}

	float Vector2::dot(const Vector2& a, const Vector2& b) {
		return a.x * b.x + a.y * b.y;
	}

	std::string Vector2::toString() const {
		std::stringstream ss;
		ss << "(" << x << ", " << y << ")";
		return ss.str();
	}
}