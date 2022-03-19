#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    this->index = 0;
   // std::cout << "Constructer called" << std::endl;
    return ;
}

PhoneBook::~PhoneBook() {
  //  std::cout << "Destructer called" << std::endl;
    return ;
}

// void    PhoneBook::printPhoneBook() {
//     PhoneBook tmp;

//     for (int i = 0; i < 5; i++) {
//         printf("%c\n", tmp.people[i]);
//     }
// }


// void    PhoneBook::upIndex() {
//     if (this->index < 8)
//         this->index++;
//     else
//     {
//         std::cout << "Choose another team" << std::endl;
//         this->index = 0;
//     }
// }
void    PhoneBook::CopyContact(Contact tmp) {
    if (iter == 8)
        iter = 0;
    people[iter] = tmp;
    iter++;
}

void    PhoneBook::_printPB(PhoneBook book) {
    printf("%d\n", iter);
    for (int i = 0; i < iter; i++) {
        book.people[i].getInfo();
    }
}

void    PhoneBook::add(PhoneBook head) {
    Contact tmp;

    std::string command;
    // std::cout << "Enter F";
    std::cin >> command;
    head.people[0].setInfo(command, 'F');
    head.people[0].getInfo();
    // tmp.setInfo(command, 'F');
    // std::cout << "Enter L";
    // std::cin >> command;
    // tmp.setInfo(command, 'L');
    // std::cout << "Enter P";
    // std::cin >> command;
    // tmp.setInfo(command, 'P');
    // std::cout << "Enter N";
    // std::cin >> command;
    // tmp.setInfo(command, 'N');
    // std::cout << "Enter D";
    // std::cin >> command;
    // tmp.setInfo(command, 'D');
    // if (iter < 8)
    //     head.CopyContact(tmp);
    // tmp.getInfo();
    // for (int i = 0; i < 5; i++) {
    // tmp.getInfo();
    //     std::cout << tmp.getInfo();
    //     std::cin >> command;
    //     tmp.setInfo(command, i);
    // }
}