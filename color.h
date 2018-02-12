#pragma once
#include "byte.h"
namespace Color
{
	typedef struct Color
	{
		byte R;
		byte G;
		byte B;
		byte A;
		Color(byte red, byte green, byte blue, byte alpha = 255)
		{
			R = red;
			G = green;
			B = blue;
			A = alpha;
		}
	} Color;
	const Color Black(0, 0, 0);
	const Color White(255, 255, 255);
	const Color Red(255, 0, 0);
	const Color Green(0, 255, 0);
	const Color Blue(0, 0, 255);
}