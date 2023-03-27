#ifndef VECTOR2_HPP
#define VECTOR2_HPP

#include <sstream>
#include <string>

namespace fgmath
{
	class Vector2
	{
	public:
		float x;
		float y;

		Vector2();
		~Vector2();
		Vector2(float x, float y);

		Vector2 operator+(const Vector2& v) const;
		Vector2 operator-(const Vector2& v) const;
		Vector2 operator*(float s) const;
		Vector2 operator/(float s) const;
		Vector2 normalize() const;

		void operator+=(const Vector2& v);
		void operator-=(const Vector2& v);
		void operator*=(float s);
		void operator/=(float s);

		bool operator==(const Vector2& other) const;
		bool operator!=(const Vector2& other) const;

		float dot(const Vector2& v) const;
		float magnitude() const;
	};
}

#endif