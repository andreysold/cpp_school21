#ifndef PHONEBOOK_HPP_
#define PHONEBOOK_HPP_
#include <iostream>
#include "Contact.hpp"

class PhoneBook {
    private:
        int index;
        Contact people[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void    add(PhoneBook head);
        // void    upIndex(void);
        void    CopyContact(Contact tmp);
        void    _printPB(PhoneBook book);
        // void    printPhoneBook();
        // void    addContact(std::string);
        // void search();
        // void exit();
};

#endif