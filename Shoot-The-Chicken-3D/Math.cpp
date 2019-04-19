#include "MyConsoleEngine.h"

//���������ĵ��
float Math::Vec2_Dot(const VECTOR2& vec1, const VECTOR2& vec2)
{
	return vec1.x*vec2.x + vec1.y*vec2.y;
};

//ŷ�Ͼ���
float Math::Vec2_Length(const VECTOR2& vec)
{
	return sqrtf(vec.x*vec.x + vec.y*vec.y);
}
