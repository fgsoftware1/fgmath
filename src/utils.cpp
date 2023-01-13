#include <utils.hpp>
#include <constants.h>

namespace fgmath
{
	namespace utils
	{
		float DegToRad(float deg)
		{
			return deg * PI / 180.0f;
		}

		float RadToDeg(float rad)
		{
			return rad * 180.0f / PI;
		}
	} // namespace utils

} // namespace fgmath
