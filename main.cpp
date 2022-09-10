#include<iostream>
#include<ctime>
#include"Color.h"
#include"DynamicIntArray.h"
using namespace std;

void Show(const Color& color);
void Show(const DynamicIntArray dynamicArray);
void Initialize(DynamicIntArray dynamicArray);

int main()
{
	std::srand(static_cast<unsigned>(std::time(nullptr)));
	Color yellow;
	Show(yellow);

	Color white(255, 255, 255);
	Show(white);

	DynamicIntArray dynamicArray{5};
	
	Show( dynamicArray);
	Initialize(dynamicArray);
	cout << "\tNew array\n";
	Show(dynamicArray);

	return 0;
}
void Show(const Color& color)
{
	cout << "\n\tColor RGB:";
	color.ShowRGB();
	cout << endl;
}
void Show(const DynamicIntArray dynamicArray) 
{
	for (size_t i = 0;  i< dynamicArray.GetSize(); i++)
	{
		cout <<"\tElement : ["<<i <<"] = " << dynamicArray.GetElement(i) << "\n";
	}
	cout << "\n";
}
void Initialize(DynamicIntArray dynamicArray)
{
	for (size_t i = 0; i < dynamicArray.GetSize(); i++)
	{
		dynamicArray.SetElement(i, rand() % 80);
	}
}