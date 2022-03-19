#ifndef CONTACT_HPP_
# define CONTACT_HPP_


#include <iostream>
// #include "C"
class Contact {
    private:
        std::string FirstName;
        std::string LastName;
        std::string PhoneNumber;
        std::string NickName;
        std::string DarkSecret;
    public:
        Contact();
        ~Contact(); 
        void    setInfo(std::string value, char c);
        void    getInfo(void);
};


#endif