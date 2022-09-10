#include "Color.h"
#include <iostream>

Color::Color(byte red, byte green, byte blue):red(red),green(green),blue(blue) {  }

void Color::ShowRGB()const 
{
	std::cout <<"R=["<< static_cast<int>(red)<<"]"<<",  ";
	std::cout << "G=[" << static_cast<int>(green) << "]" << ",  ";
	std::cout << "B[" << static_cast<int>(blue) << "]" << ";" << std::endl;
}