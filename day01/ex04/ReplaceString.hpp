#include <iostream>

class ReplaceString
{
    private:
        std::string file_name;
        std::string s1;
        std::string s2;
        std::string word1;
        std::string word2;
    public:
        ReplaceString(std::string file_name);
        void    ReplaceStr(std::string s1, std::string s2);
        ~ReplaceString();
};