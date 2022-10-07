

#include <iostream>

int main()
{
	std::cout << "Size of Character " << sizeof(char) << " bytes" << std::endl;
	std::cout << "Size of Integer " << sizeof(int) << " bytes" << std::endl;
	std::cout << "Size of Small Integer " << sizeof(short int) << " bytes" << std::endl;
	std::cout << "Size of Long Integer " << sizeof(long int) << " bytes" << std::endl;
	std::cout << "Size of Float " << sizeof(float) << " bytes" << std::endl;
	std::cout << "Size of Double " << sizeof(double) << " bytes" << std::endl;
	std::cout << "Size of Wide Character " << sizeof(wchar_t) << " bytes" << std::endl;
	enum color
	{red, yelow, green = 20 , blue };
	color col = red;
	int n = blue;
	std::cout << blue << std::endl;


	return 0;
}