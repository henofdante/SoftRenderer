#include <iostream>
#include <stdlib.h>
#include "vmath.h"

int main()
{
	vmath::Vector3 v3;
	v3 << 1, 2, 3;
	vmath::Matrix4 m;
	m << 1, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 1;
	auto n = v3 * m;
	std::cout << n(0) << "," << n(1) << "," << n(2) << std::endl;
	std::system("pause");
}
