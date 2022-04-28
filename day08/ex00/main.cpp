#include <vector>
#include <iostream>
#include "easyfind.hpp"
#include <exception>

int main()
{

	std::vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	std::cout << v << std::endl;
	try {
		int k;
		k = find_value(v, 0);
		std::cout << k << std::endl;
	}
	catch (Exe::GradeToLow &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::list<int> fv;
	for (int i = 0; i < 11; i++) {
		fv.push_back(10 - i);
	}
	try
	{
		float k = find_value(fv, 1);
		std::cout << k << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << v << std::endl;
	std::cout << fv << std::endl;
	return (0);
}