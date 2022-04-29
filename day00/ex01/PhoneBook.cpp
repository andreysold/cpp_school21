#include <iostream>
#include "PhoneBook.hpp"
#include <iomanip>
PhoneBook::PhoneBook() {index = 0;count = 0;}

PhoneBook::~PhoneBook() {}

void    PhoneBook::_printPB() {
	std::string p;

	std::cout << std::setw (11);
	std::cout << "ID|";
    for (int i = 0; i < 3; i++) {
		std::cout << std::setw (10);
            std::cout << people->getKey(i);
        std::cout << "|";
    }
    std::cout << "\n";
    for (int i = 0;i < count; i++) {
		std::cout << std::setw (10);
        std::cout << i << "|";
        for (int j = 0; j < 3; j++) {
			p = this->people[i].getValue(j);
			if (p.size() > 10)
			{
				std::string t = people[i].getValue(j);
				std::cout << t.substr(0, 9);
				std::cout << ".";
			}
			else
			{
				std::cout << std::setw (10);
				std::cout << this->people[i].getValue(j);
			}
            std::cout << "|";
        }
        std::cout << "\n";
    }
}

void    PhoneBook::search() {
    int command = 0;
    _printPB();
    std::cout << "Enter the value you are looking for: ";
    std::cin >> command;
	if(std::cin.fail() || !(command >= 0 && command <= 7))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "You can enter only digit. (0 - 7)\n";
	}
	else
	{
		if (count == 0)
			std::cout << "Empty Phonebook\n";
		else if (command >= count)
			std::cout << "Large index\n";
		else
		{
			for (int i = 0; i < count; i++) {
				if (i == command)
					people[command].getInfo();
			}
		}
	}
}

void    PhoneBook::add() {

	std::string command;
    if (!std::cin.eof())
    {
		if (count == 8)
			index = 0;
        std::cout << "Enter your personal data" << std::endl;
        std::cout << "FirstName: ";
        std::cin >> command;
        this->people[index].setInfo(command, 0);
        std::cout << "LastName: ";
        std::cin >> command;
        this->people[index].setInfo(command, 1);
        std::cout << "NickName: ";
        std::cin >> command;
        this->people[index].setInfo(command, 2);
        std::cout << "PhoneNumber: ";
        std::cin >> command;
        this->people[index].setInfo(command, 3);
        std::cout << "DarkSecret: ";
        std::cin >> command;
        this->people[index].setInfo(command, 4);
		if (index < 8)
        	index++;
		if (count < 8)
        	count++;
    }
    else
        exit (1);
}