#ifndef PHONEBOOK_HPP_
#define PHONEBOOK_HPP_
#include <iostream>
#include "Contact.hpp"

class PhoneBook {
    private:
        int index;
        int count;
        Contact people[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void    add();
        void    _printPB();
        void    search();
        // void    
        // void    addContact(std::string);
        // void search();
        // void exit();
};

#endif