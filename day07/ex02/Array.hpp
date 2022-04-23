#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>

class Array
{
private:
	unsigned int _size;
	T	*arr;
public:
class smallIndex:public std::exception {
public:
	virtual const char * what() const throw()
	{
		return ("Exception: < small index >");
	};
};
class bigIndex:public std::exception {
public:
	virtual const char *what() const throw()
	{
		return ("Exception: < big index >");
	};
};
	Array():_size(0) {
	};
	Array(unsigned int size):_size(size)
	{
		this->arr = new T[this->_size];
		for (int i = 0;i < size; i++) {
			this->arr[i] = 0;
		}
	};
	~Array()
	{
		if (this->arr)
			delete[] this->arr;
	};
	Array(const Array &rhs)
	{
		this->_size = rhs._size;
		this->arr = new T[this->_size];
		for (int i = 0; i < this->_size; i++) {
			this->arr[i] = rhs.arr[i];
		}
	};
	Array	&operator=(const Array &rhs)
	{
		if (this->_size > 0)
			delete[] this->arr;
		this->_size = rhs._size;

		this->arr = new T[this->_size];
		this->_size = rhs._size;
		for (int i = 0;i < rhs._size; i++) {
			this->arr[i] = rhs.arr[i];
		}
		return (*this);
	};
	T		&operator[](int index)
	{
		if (index < 0)
			throw smallIndex();
		if (index > this->_size)
			throw bigIndex();
		return (this->arr[index]);
	};
};


#endif