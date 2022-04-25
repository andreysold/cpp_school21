#include <vector>
#include <iostream>
#include "easyfind.hpp"
#include <exception>


class Exe
{
public:
	class GradeToLow:public std::exception {
	public:
		virtual const char * what() const throw();
	};
};


//const char *GradeToLow::what() const throw() {return "ERROR";};

const char *Exe::GradeToLow::what() const throw() {return "ERROR";}
template <typename T>
T	&find_value(std::vector<T> &arr, int val)
{
	typename std::vector<T>::iterator it = arr.begin();
	typename std::vector<T>::iterator ite = arr.end();
	std::cout << "start = " << *it << " end = " << *ite << std::endl;
//	std::cout << arr.size();
	it = std::find(arr.begin(), arr.end(), val);
	std::cout << *it << " " << static_cast<T>(val) << std::endl;
	if (it == arr.end() && *it != static_cast<T>(val))
		throw Exe::GradeToLow();
//	for (;it != ite; ++it)
//	{
//		if (*it == val)
//			break;
//		if (*it == *ite) {
//			std::cout << "AAA" << std::endl;
//			throw Exe::GradeToLow();
//
//		}
//	}
//	std::cout << *it << std::endl;
	return (*it);
}

int main()
{
	std::vector<int> v;
	for (int i = 0; i < 11; i++) {
		v.push_back(i);
	}
	try {
		int k = find_value(v, 10);
		std::cout << k << std::endl;
	}
	catch (Exe::GradeToLow &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}