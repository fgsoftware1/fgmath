#include "include/vector3.hpp"

namespace fgmath {
	Vector3::Vector3() : x(0.0), y(0.0), z(0.0){}

	Vector3::~Vector3(){}

	Vector3::Vector3(float uX, float uY, float uZ) : x(uX), y(uY), z(uZ){}

	Vector3 Vector3::operator+(const Vector3& v) const {
		return Vector3(x + v.x, y + v.y, z + v.z);
	}

	Vector3 Vector3::operator-(const Vector3& v) const {
		return Vector3(x - v.x, y - v.y, z - v.z);
	}
}