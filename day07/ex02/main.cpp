#include <iostream>
#include "Array.hpp"

int main()
{
	Array<float> v(12);
	Array<float> k(1);
	k = v;
	try {
		for (int i = 0;i < 12; i++) {
			std::cout << v[i] << std::endl;
			std::cout << k[i] << std::endl;
		}
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
}