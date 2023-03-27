namespace fgmath {
	class Vector3
	{
	public:
		float x, y, z;

		Vector3();
		~Vector3();
		Vector3(float x, float y, float z);

		Vector3 operator+(const Vector3& other) const;
		Vector3 operator-(const Vector3& other) const;
		Vector3 operator*(float scalar) const;

		Vector3 cross(const Vector3& other) const;
		Vector3 normalize() const;

		float dot(const Vector3& other) const;
		float magnitude() const;

	private:

	};
}