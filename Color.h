#pragma once
class Color
{
private:
	using byte = unsigned char;

	byte red = 1;
	byte green = 2;
	byte blue = 3;
public:

	Color(byte red = 100, byte green = 101, byte blue = 102);
	void SetR(byte red) { this->red = red; }
	void SetG(byte green) { this->green = green; }
	void SetB(byte blue) { this->blue = blue; }

	byte GetR() const { return red; }
	byte GetG() const { return green; }
	byte GetB() const { return blue; }

	void ShowRGB()const;
};

