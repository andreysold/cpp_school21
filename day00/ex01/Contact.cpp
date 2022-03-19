#include <iostream>
#include "Contact.hpp"

Contact::Contact(){
  //  std::cout << "Constructer called" << std::endl;
    return ;
}

Contact::~Contact(){
   // std::cout << "Destructer called" << std::endl;
    return ;
}
// std::string Contact::data[5] = {"FirstName ", "LastName ", "Nickname ", "PhoneNumber ", "DarkSecret "};

// std::string Contact::getInfo(int i) {
//     Contact forGet;
//     return (forGet.data[i]);
// }

// // void    Contact::getValue(Contact tmp) {
// //     for (int i; i < 5; i++) {
// //         std::cout << tmp.data[i];
// //     }
// // }
// void    Contact::setInfo(std::string tmp, int i) {
//     Contact key;
//     key.value[i] = tmp;
// }
void    Contact::setInfo(std::string value, char c) {
    if (c == 'F')
        this->FirstName = value;    
    else if (c == 'L')
        this->LastName = value;
    else if (c == 'P')
        this->PhoneNumber = value;
    else if (c == 'N')
        this->NickName = value;
    else if (c == 'D')
        this->DarkSecret = value;
}

void    Contact::getInfo(void) {
    std::cout << this->FirstName << std::endl;
    std::cout << this->LastName << std::endl;
    std::cout << this->PhoneNumber << std::endl;
    std::cout << this->NickName << std::endl;
    std::cout << this->DarkSecret << std::endl;
}