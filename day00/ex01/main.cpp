#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

int main(void)
{
    int flag = 1;
    std::string command;
    PhoneBook book;
    std::cout << "Hi, is is simple Phonebook on C++.\n";
    std::cout << "\nYou can enter some command: \n\n";
    std::cout << "ADD - add contact in phonebook.\n\n";
    std::cout << "SEARCH - search contact in phonebook by id.\n\n";
    std::cout << "EXIT - close phonebook.\n\n";
    while (1)
    {
        std::cout << "Enter command: \n";
        std::cin >> command;
        if (std::cin.eof())
            exit (1);
        if (command == "ADD")
            book.add();
        else if (command == "EXIT")
            break ;
        else if (command == "SEARCH")
            book.search();
    }
    return (0);
}