#include <iostream>


int main()
{
    std::string example = "HI THIS IS BRAIN";
    std::string stringPtr = example;
    std::string *stringRef = &example;

    std::cout << stringPtr << "\n";
    std::cout << stringRef << "\n";
    return (0);
}