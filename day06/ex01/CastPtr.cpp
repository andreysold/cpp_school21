#include "CastPtr.hpp"

CastPtr::CastPtr() {};

CastPtr::CastPtr(unsigned int id, unsigned int age, std::string name, std::string address)
:_id(id), _age(age), _name(name), _address(address) {};

CastPtr::~CastPtr(){};

CastPtr::CastPtr(const CastPtr &rhs)
:_id(rhs._id), _age(rhs._age), _name(rhs._name), _address(rhs._address){};

CastPtr	&CastPtr::operator=(const CastPtr &rhs)
{
	this->_id = rhs._id;
	this->_age = rhs._age;
	this->_name = rhs._name;
	this->_address = rhs._address;
	return (*this);
};

uintptr_t	CastPtr::serialize(CastPtr &rhs)
{
	uintptr_t raw;
	raw = reinterpret_cast<std::uintptr_t>(&rhs);
	return (raw);
};

CastPtr	*CastPtr::deserialize(uintptr_t rhs)
{
	CastPtr *ptr;
	ptr = reinterpret_cast<CastPtr *>(rhs);
	return (ptr);
}

void	CastPtr::displayInfo()
{
	std::cout << "Id = " << this->_id << std::endl;
	std::cout << "Age = " << this->_age << std::endl;
	std::cout << "Name = " << this->_name << std::endl;
	std::cout << "Address = " << this->_address << std::endl;
}
