#ifndef CASTPTR
# define CASTPTR
#include <iostream>
class	CastPtr
{
private:
	unsigned int _id;
	unsigned int _age;
	std::string _name;
	std::string _address;
	CastPtr();
public:
	CastPtr(unsigned int id, unsigned int age, std::string name, std::string address);
	~CastPtr();
	CastPtr(const CastPtr &rhs);
	CastPtr	&operator=(const CastPtr &rhs);
	uintptr_t 	serialize(CastPtr &rhs);
	CastPtr *deserialize(uintptr_t rhs);
	void	displayInfo();
};


#endif