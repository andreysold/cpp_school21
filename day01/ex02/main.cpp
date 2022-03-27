#include <iostream>
#include <string>


void    byPtr(std::string *str) {
    *str += " and ponies";
}

void    byConstPtr(std::string const *str) {
    std::cout << *str << std::endl;
}

void    byRef(std::string& str) {
    str += " and ponies";
}

void    byConstRef(std::string const &str) {
    std::cout << str << std::endl;
}
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