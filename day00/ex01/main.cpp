#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"






int main(void)
{
    int flag = 1;
    std::string command;
    PhoneBook book;
    // std::cout << "Hi, Enter your command\n";
    // while (flag)
    // {
        std::cin >> command;
        if (command == "ADD")
            book.add(book);
        if (command == "EXIT")
            flag = -1;
        // if (command == 'SEARCH')
            // book.search();
    // }
    // book.upIndex();
    book._printPB(book);
    std::cout << "A";
    return (0);
}