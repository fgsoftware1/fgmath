#ifndef VECTOR2_HPP
#define VECTOR2_HPP

namespace fgmath
{
	namespace vector2
	{
		class Vector2
		{
		public:
			float x;
			float y;

			Vector2();
			~Vector2();
			Vector2(float x, float y);

			void operator+=(const Vector2& v);
			void operator-=(const Vector2& v);
			void operator*=(float s);
			void operator/=(float s);

			Vector2 operator+(const Vector2& v) const;
			Vector2 operator-(const Vector2& v) const;
			Vector2 operator*(float s) const;
			Vector2 operator/(float s) const;
			Vector2 normalize() const;

			float dot(const Vector2& v) const;
			float magnitude() const;
		};
	} // namespace vector2

} // namespace fgmath

#endif