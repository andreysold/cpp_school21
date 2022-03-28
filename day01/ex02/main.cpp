#include <iostream>
#include <string>

int main()
{

	std::string example = "HI THIS IS BRAIN";
	std::string& stringREF = example;
	std::string* stringPTR = &example;

	std::cout << &example << '\n';
	std::cout << &(*stringPTR) << '\n';
	std::cout << &stringREF << '\n';
	std::cout << example << '\n';
	std::cout << *stringPTR << '\n';
	std::cout << stringREF << '\n';
	return (0);
}