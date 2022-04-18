#ifndef CAST_HPP
# define CAST_HPP
#include <iostream>

#include <exception>
class Cast
{
private:
	const char *num;
	Cast();
public:
	~Cast();
	Cast(const Cast &rhs);
	Cast	&operator=(const Cast &rhs);
	Cast(const char *str);
	class	Impossible:public std::exception
	{
	public:
		const char *what() const throw();
	};
	class	Displayable:public std::exception
	{
	public:
		const char *what() const throw();
	};
	void	move();
	void	disInt(long num);
	void	disFloat(double num);
	void	disChar(int num);
	void	disDouble(double num);
};

#endif