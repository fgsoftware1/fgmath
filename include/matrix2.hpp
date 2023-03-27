#include "vector2.hpp"

namespace fgmath {
	class Matrix2
	{
	public:
		Matrix2();
		~Matrix2();
		Matrix2(float e00, float e01, float e10, float e11);

		Matrix2 operator+(const Matrix2& other) const;
		Matrix2 operator-(const Matrix2& other) const;
		Matrix2 operator*(float scalar) const;
		Matrix2 operator*(const Matrix2& other) const;

		Matrix2 Transpose() const;
		Matrix2 Inverse() const;

		Vector2 operator*(const Vector2& v) const;
	private:
		float elements[2][2];
	};
}