#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>
#include <exception>

class Span
{
private:
	int _num;
	std::vector<int> v;
	Span();
public:
	class GradeToLow:public std::exception
	{
	public:
		virtual const char * what() const throw();
	};
	Span(int count);
	~Span();
	Span(const Span &rhs);
	Span &operator=(const Span &rhs);
	void	addNumber(int num);
	void	displayInfo();
	int		longestSpan();
	int		shortestSpan();
};

#endif