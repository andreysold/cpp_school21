#include <vector>
#include <iostream>
#include "easyfind.hpp"
#include <exception>
#include <iterator>


//template <class T>
//T	&find_value(T &arr, int  val)
//{
//	T::iter
//	std::cout << val << std::endl;
//	std::cout << arr << std::endl;
//	std::cout <<
//	typename T::iterator pos = ;
//	typename std::iterator<T> it = arr.begin();
//	typename std::vector<T>::iterator ite = arr.end();
//	it = std::find(arr.begin(), arr.end(), val);
//	if (it == arr.end() && *it != static_cast<T>(val))
//		throw Exe::GradeToLow();
//	return (it);
//	return (static_cast<T>(val));
//
//}


//template <class T>
//
//void find_v(T &arr, int val)
//{
//	std::arr<T>::ite
////	typename std::iterator<T> it = ar
//}

int main()
{

	std::vector<int> v;

	for (int i = 0; i < 11; i++) {
		v.push_back(i);
	}
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