#pragma once
#include "Eigen/Dense"
namespace vmath
{
	typedef Eigen::RowVector4d Vector4;
	typedef Eigen::Matrix4d Matrix4;
	typedef Eigen::RowVector2i Vector2i;

	// a Vector3 that can be multiplied by Matrix4 (filled with 1)
	class Vector3 : public Eigen::RowVector3d
	{
	public:
		using Eigen::RowVector3d::RowVector3d;
		Vector3 operator*(const Matrix4& m);
	};
}
