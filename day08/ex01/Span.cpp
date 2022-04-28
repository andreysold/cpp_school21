#include "Span.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
Span::Span() {

};

Span::Span(int count): _num(count) {};

Span::~Span() {};

Span::Span(const Span &rhs) {_num = rhs._num;};

Span &Span::operator=(const Span &rhs)
{
	_num = rhs._num;
	return (*this);
};

const char *Span::GradeToLow::what() const throw() {return "ERROR";}

void	Span::displayInfo()
{
	std::vector<int>::iterator it = v.begin();
	std::vector<int>::iterator ite = v.end();
	while (it != ite)
	{
		std::cout << *it << " ";
		*it++;
	}
	std::cout << std::endl;
}
int		Span::longestSpan()
{
	std::vector<int>::iterator min;
	std::vector<int>::iterator max;
	max = std::max_element(v.begin(), v.end());
	min = std::min_element(v.begin(), v.end());
	return (*max - *min);
}

int		Span::shortestSpan()
{
	int min = INT_MAX;
	int tmp;

	if (v.size() <= 1)
		throw Span::GradeToLow();
	std::sort(v.begin(), v.end());
	for (unsigned int i = 0; i < v.size() - 1; i++) {
		tmp = v[i + 1] - v[i];
		if (tmp < min)
			min = tmp;
	}
	return(min);
}

void	Span::addNumber(int num)
{
	if (v.size() >= _num)
		throw Span::GradeToLow();
	this->v.push_back(num);
}


