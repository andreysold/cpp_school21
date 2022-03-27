#include <iostream>
#include "ReplaceString.hpp"
#include <fstream>

ReplaceString::ReplaceString(std::string file_name) 
{
    this->file_name = file_name;
}

ReplaceString::~ReplaceString(){};

void    ReplaceString::ReplaceStr(std::string word1, std::string word2)
{
    std::ifstream last_file(this->file_name);
    while (!last_file.eof())
    {
        getline(last_file, this->s1);
        this->s2 += this->s1;
        if (!last_file.eof()) {
            this->s2 += '\n';
        }
    }
    std::ofstream new_file(this->file_name + "_replace");
    int i = 0;
    while (i < s2.size())
    {
        if (this->s2.substr(i, word1.size()) == word1)
        {
            new_file << word2;
            i += word1.size() - 1;
        }
        else
            new_file << s2[i];
        i++;
    }
};