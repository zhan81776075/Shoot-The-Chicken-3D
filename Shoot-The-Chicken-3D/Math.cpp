#include "MyConsoleEngine.h"

//两个向量的点积
float Math::Vec2_Dot(const VECTOR2& vec1, const VECTOR2& vec2)
{
	return vec1.x*vec2.x + vec1.y*vec2.y;
};

//欧氏距离
float Math::Vec2_Length(const VECTOR2& vec)
{
	return sqrtf(vec.x*vec.x + vec.y*vec.y);
}
