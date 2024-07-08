/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:54:28 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/05 13:02:11 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int PhoneBook::contactCount = 0;
int PhoneBook::index = 0;

int	PhoneBook::contactIndex() {
	phoneBook[index].exists = true;

	index = (index + 1) % 7;

	if (contactCount < 7) {
		contactCount++;
	}

	return (index);
}

std::string	PhoneBook::firstNameVerif(std::string firstName) {
	while (firstName.empty()) {
		std::cout << "First name is empty!" << std::endl;
		std::cout << "Insert first name:" << std::endl;
		if (std::cin.eof())
			exit (2);
		std::getline(std::cin, firstName);
	}
	return (firstName);
}

std::string	PhoneBook::lastNameVerif(std::string lastName) {
	while (lastName.empty()) {
		std::cout << "Last name is empty!" << std::endl;
		std::cout << "Insert last name:" << std::endl;
		if (std::cin.eof())
			exit (2);
		std::getline(std::cin, lastName);
	}
	return (lastName);
}

std::string	PhoneBook::darkSecVerif(std::string darkSecret) {
	while (darkSecret.empty()) {
		std::cout << "Darkest Secret is empty!" << std::endl;
		std::cout << "Insert the Darkest Secret:" << std::endl;
		if (std::cin.eof())
			exit (2);
		std::getline(std::cin, darkSecret);
	}
	return (darkSecret);
}

int	PhoneBook::numberVerif(std::string phoneNum) {
	while (phoneNum.empty() || inspectPhoneNum(phoneNum) == -1) {
		if (phoneNum.empty())
			std::cout << "Phone number is empty!" << std::endl;
		else
			std::cout << "Phone number has an invalid characters!" << std::endl;
		std::cout << "Insert phone number:" << std::endl;
		if (std::cin.eof())
			exit (2);
		std::getline(std::cin, phoneNum);
	}
	return (0);
}

int	PhoneBook::inspectPhoneNum(std::string phoneNum) {
	for (std::string::size_type i = 0; i < phoneNum.length(); ++i) {
		if (!std::isdigit(phoneNum[i]))
			return (-1);
	}
	return (0);
}

std::string	PhoneBook::nickVerif(std::string nickName) {
	while (nickName.empty()) {
		std::cout << "Nickname is empty!" << std::endl;
		std::cout << "Insert Nickname:" << std::endl;
		if (std::cin.eof())
			exit (2);
		std::getline(std::cin, nickName);
	}
	return (nickName);
}

void	PhoneBook::defineContact(std::string info, std::string type) {
	if (type == "firstName")
		phoneBook[index].setFirstName(info);
	if (type == "lastName")
		phoneBook[index].setLastName(info);
	if (type == "nickName")
		phoneBook[index].setNickName(info);
	if (type == "darkSecret")
		phoneBook[index].setDarkSec(info);
	if (type == "phoneNum")
		phoneBook[index].setPhoneNum(info);
}

void	PhoneBook::getContactInfo() {

	system("clear");

	std::string	info;

	std::cout << "Insert first name:" << std::endl;
	if (std::cin.eof())
		exit (2);
	std::getline(std::cin, info);
	info = firstNameVerif(info);
	defineContact(info, "firstName");

	std::cout << "Insert last name:" << std::endl;
	if (std::cin.eof())
		exit (2);
	std::getline(std::cin, info);
	info = lastNameVerif(info);
	defineContact(info, "lastName");

	std::cout << "Insert nickname:" << std::endl;
	if (std::cin.eof())
		exit (2);
	std::getline(std::cin, info);
	info = nickVerif(info);
	defineContact(info, "nickName");

	std::cout << "Insert phone number:" << std::endl;
	if (std::cin.eof())
		exit (2);
	std::getline(std::cin, info);
	numberVerif(info);
	defineContact(info, "phoneNum");

	std::cout << "Insert darkest secret:" << std::endl;
	if (std::cin.eof())
		exit (2);
	std::getline(std::cin, info);
	info = darkSecVerif(info);
	defineContact(info, "darkSecret");

	contactIndex();
}

std::string	PhoneBook::adjust(std::string info) {
	if (info.length() > 10)
		return (info.substr(0, 9) + '.');
	else
		return (info);
}

void	PhoneBook::getContact() {
	int			i;
	std::string	index;

	system("clear");

	while (1) {
		for (int i = 0; i < 7; i++) {
			if (phoneBook[i].exists == true) {
				std::cout << std::endl;
				std::cout << i + 1 << "|";
				std::cout << std::setw(10) << adjust(phoneBook[i].getFirstName()) << "|";
				std::cout << std::setw(10) << adjust(phoneBook[i].getLastName()) << "|";
				std::cout << std::setw(10) << adjust(phoneBook[i].getNickName()) << "|";
				std::cout << std::endl;
			}
		}
		std::cout << WHITE << "To go to the menu, enter 0" << RESET << std::endl;
		std::cout << BLUE << "Please enter contact's index:" << RESET;
		getline(std::cin, index);
		if (std::cin.eof())
			exit (2);
		i = atoi(&index[0]);
		if (i < 1 || i > contactCount) {
			system("clear");
			std::cout << RED << "Invalid index. Please enter a valid index (1-" << contactCount << ") or 0 to go to the menu." << RESET << std::endl;
		}
		else {
			system("clear");
			std::cout << std::endl;
			std::cout << i;
			std::cout << "|";
			std::cout << std::setw(10) << adjust(phoneBook[i - 1].getFirstName()) << "|";
			std::cout << std::setw(10) << adjust(phoneBook[i - 1].getLastName()) << "|";
			std::cout << std::setw(10) << adjust(phoneBook[i - 1].getNickName()) << "|";
			std::cout << std::endl;
		}
		if (index.length() == 1 && index[0] == '0') {
			system("clear");
			break;
		}
	}
}
