#include <iostream>
#include <fstream>
#include <string>
#include "ReplaceString.hpp"

int main()
{
    std::string s1;
    std::string s2;
    std::string fileName;

    std::cout << "ENTER TWO WORDS, which has in file(text.txt)\n";
    std::cin >> s1;
    std::cin >> s2;
    std::cout << "ENTER FILE_NAME\n";
    std::cin >> fileName;
    ReplaceString word(fileName);
    word.ReplaceStr(s1, s2);
    return (0);
}