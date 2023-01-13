#include <cmath>
#include <vector2.hpp>

namespace fgmath
{
	namespace vector2
	{
		Vector2::Vector2() : x(0.0), y(0.0){};
		Vector2::~Vector2(){};
		Vector2::Vector2(float uX, float uY) : x(uX), y(uY){};

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

		Vector2 Vector2::normalize() const
		{
			float mag = magnitude();
			if (mag == 0)
				return Vector2();
			return Vector2(x / mag, y / mag);
		}

		float Vector2::dot(const Vector2& v) const
		{
			return x * v.x + y * v.y;
		}

		float Vector2::magnitude() const
		{
			return sqrt(x * x + y * y);
		}
	} // namespace vector2

} // namespace fgmath
