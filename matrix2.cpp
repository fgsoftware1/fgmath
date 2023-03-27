#include "include/matrix2.hpp"


namespace fgmath {
	Matrix2::Matrix2(){
		elements[0][0] = 0.0f;
		elements[0][1] = 0.0f;
		elements[1][0] = 0.0f;
		elements[1][1] = 0.0f;
	}

	Matrix2::~Matrix2(){}

	Matrix2::Matrix2(float e00, float e01, float e10, float e11){
		elements[0][0] = e00;
		elements[0][1] = e01;
		elements[1][0] = e10;
		elements[1][1] = e11;
	}

	Matrix2 Matrix2::operator+(const Matrix2& other) const{
		Matrix2 result;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				result.elements[i][j] = elements[i][j] + other.elements[i][j];
			}
		}
		return result;
	}

	Matrix2 Matrix2::operator-(const Matrix2& other) const {
		Matrix2 result;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				result.elements[i][j] = elements[i][j] - other.elements[i][j];
			}
		}
		return result;
	}

	Matrix2 Matrix2::operator*(float scalar) const {
		Matrix2 result;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				result.elements[i][j] = elements[i][j] * scalar;
			}
		}
		return result;
	}

	Matrix2 Matrix2::operator*(const Matrix2& other) const {
		Matrix2 result;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				result.elements[i][j] = 0.0f;
				for (int k = 0; k < 2; k++) {
					result.elements[i][j] += elements[i][k] * other.elements[k][j];
				}
			}
		}
		return result;
	}

	Matrix2 Matrix2::Transpose() const{
		return Matrix2(elements[0][0], elements[1][0], elements[0][1], elements[1][1]);
	}

	Matrix2 Matrix2::Inverse() const{
		float det = elements[0][0] * elements[1][1] - elements[0][1] * elements[1][0];
		if (det == 0) {
			return Matrix2();
		}
		float invDet = 1.0f / det;
		return Matrix2(elements[1][1] * invDet, -elements[0][1] * invDet, -elements[1][0] * invDet, elements[0][0] * invDet);
	}

	Vector2 Matrix2::operator*(const Vector2& v) const{
		return Vector2(elements[0][0] * v.x + elements[0][1] * v.y, elements[1][0] * v.x + elements[1][1] * v.y);
	}
}