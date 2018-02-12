#pragma once
#include "vmath.h"
using namespace vmath;
Vector3 vmath::Vector3::operator*(const Matrix4& m)
{
	Vector4 v;
	v << *this, 1;
	v *= m;
	return Vector3{v(0), v(1), v(2)};
}
