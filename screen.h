#pragma once
#include "color.h"
#include "byte.h"
namespace Hardware
{
	class Screen 
	{
	public:
		Screen(int weight, int height);
		// set the image in the inner buffer
		void setPixel(int x_pos, int y_pos, Color::Color color);
		// reset the whole screen to <color>
		void reset(Color::Color color = Color::Black);
		// display image in the inner buffer
		void display();
	private:
		Color::Color* _imgbuffer;
	};
}