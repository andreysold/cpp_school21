#include "Cast.hpp"
#include <limits>
#include <iomanip>

Cast::Cast() {};

Cast::~Cast() {};

Cast::Cast(const Cast &rhs)
{
	this->num = rhs.num;
};

Cast &Cast::operator=(const Cast &rhs)
{
	this->num = rhs.num;
	return (*this);
};

Cast::Cast(const char *str){ this->num = str;};

const char *Cast::Displayable::what() const throw() {return "Non displayable";};

const char *Cast::Impossible::what() const throw() {return  "impossible";};


//	CAST

void	Cast::move()
{
	if (isprint(this->num[0]) && !this->num[1] && !isdigit(this->num[0]))
	{
		char c = this->num[0];
		disChar(c);
		disInt(c);
	}
	else if (strchr(this->num, '.'))
	{
		float c = strtod(this->num, NULL);
		disChar(c);
		disInt(c);
		disFloat(c);
		disDouble(c);
	}
	else
	{
		double c = strtod(this->num, NULL);
		disChar(static_cast<int>(c));
		disInt(c);
		disFloat(c);
		disDouble(c);
	}
};

void	Cast::disInt(long num)
{
	std::cout << "Int: ";
	try
	{
		if (num > INT_MAX || num < INT_MIN)
			throw Cast::Impossible();
		std::cout << num << std::endl;
	}
	catch (Cast::Impossible &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "ERROR" << std::endl;
	}
};

void	Cast::disFloat(float num)
{
	std::cout.precision(1);
	std::cout << "Float: " << std::fixed << num << "f" << std::endl;
};

void	Cast::disDouble(double num)
{
	std::cout.precision(1);
	std::cout << "Double: " << std::fixed << num << std::endl;
};

void	Cast::disChar(int num)
{
	std::cout << "Char: ";
	try
	{
		if (num <= CHAR_MIN || num >= CHAR_MAX)
			throw Cast::Impossible();
		if (!isprint(num))
			throw Cast::Displayable();
		std::cout << "'" << char(num) << "'" << std::endl;
	}
	catch(Cast::Impossible &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Cast::Displayable &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "ERROR" << std::endl;
	}
};