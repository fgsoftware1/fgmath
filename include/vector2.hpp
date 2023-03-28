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

		static const Vector2 down;
		static const Vector2 up;
		static const Vector2 left;
		static const Vector2 right;
		static const Vector2 one;

		Vector2 operator+(const Vector2& v) const;
		Vector2 operator-(const Vector2& v) const;
		Vector2 operator*(float s) const;
		Vector2 operator/(float s) const;
		Vector2 normalized() const;

		Vector2& operator+=(const Vector2& v);
		Vector2& operator-=(const Vector2& v);
		Vector2& operator*=(float s);
		Vector2& operator/=(float s);

		void normalize();

		bool operator==(const Vector2& other) const;
		bool operator!=(const Vector2& other) const;

		float magnitude() const;
		float sqrtMagnitude() const;

		static float distance(const Vector2& a, const Vector2& b);
    	static float dot(const Vector2& a, const Vector2& b);

		std::string Vector2::toString() const;
	};
}

#endif