#include <iostream>
#include "Contact.hpp"
#include <iomanip>
Contact::Contact(){
	key[0] = "FirstName";
	key[1] = "LastName";
	key[2] = "NickName";
	key[3] = "PhoneNumber";
	key[4] = "DarkSecret";
}

Contact::~Contact(){}

void    Contact::setInfo(std::string value, int i) {
	this->value[i] = value;
}

std::string    Contact::getKey(int i) {
	return (this->key[i]);
}

std::string    Contact::getValue(int i) {
	return (this->value[i]);
}

int Contact::getKeyLen(int i) {
	return (this->key[i].size());
}

//void	Contact::getTen(int idx) {
//	for (int i; i < 9; i++) {
//		std::cout << this->value[i];
//	}
//}
void    Contact::getInfo(void) {
	for (int i = 0; i < 5; i++) {
		std::cout << this->key[i] << ": ";
		std::cout << this->value[i] << "\n";
	}
	std::cout << "\n";
}