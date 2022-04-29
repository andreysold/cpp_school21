#include <iostream>
#include "CastPtr.hpp"

struct Data
{
	std::string Name;
	std::string Address;
	unsigned int Id;
	unsigned int Age;
};


//uintptr_t serialize(Data* ptr)
//{
//	uintptr_t p;
//	p = reinterpret_cast<std::uintptr_t>(ptr);
//	return (p);
//}

//Data	*deserialize(uintptr_t raw)
//{
//	Data *ptr;
//	ptr = reinterpret_cast<Data *>(raw);
//	return (ptr);
//}

int main()
{
	CastPtr	ptr(4, 20, "Andrey", "Moscow");
	CastPtr	w(1,1,"a", "a");
	w = ptr;
	CastPtr *cast_ptr;
	uintptr_t raw;
	ptr.displayInfo();

	std::cout << "\nSERIALIZE" << std::endl;

	raw = ptr.serialize(ptr);
	cast_ptr = ptr.deserialize(raw);
	cast_ptr->displayInfo();
//	Data ptr = {.Id = 4, .Age = 20, .Name = "Andrey", .Address = "Moscow"};
//	std::cout << ptr.Id << " " << ptr.Age << " " << ptr.Name << " " << ptr.Address << std::endl;
//	uintptr_t p = serialize(&ptr);
//	Data *ptr2 = deserialize(p);
//	std::cout << ptr2->Id << " " << ptr2->Age << " " << ptr2->Name << " " << ptr2->Address << std::endl;
}