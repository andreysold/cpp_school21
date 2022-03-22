#ifndef CONTACT_HPP_
# define CONTACT_HPP_


#include <iostream>
class Contact {
    private:
        std::string value[5];
        std::string key[5];
    public:
        Contact();
        ~Contact();
        void    getTen(int idx);
        void    setInfo(std::string value, int i);
        void    getInfo(int idx);
        std::string    getKey(int i);
        std::string    getValue(int i);
        int     getKeyLen(int i);
};


#endif