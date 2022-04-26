#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <algorithm>

template <typename T>
class B
{
private:

};

class Exe
{
public:
	class GradeToLow:public std::exception {
	public:
		virtual const char * what() const throw();
	};
};

const char *Exe::GradeToLow::what() const throw() {return "Exception: <Didnt find value>";}

template <typename T>
std::ostream &operator<<(std::ostream &out, T &v)
{
	typename T::const_iterator it = v.begin();
	typename T::const_iterator  ite = v.end();
	while (it != ite)
	{
		out << *it << ' ';
		*it++;
	}
	return (out);
}

template <class T>

int find_value(T &arr, int val)
{
	typename T::iterator it;
	it = std::find(arr.begin(), arr.end(), val);
	if (it == arr.end())
		throw Exe::GradeToLow();
	return *it;
}

#endif