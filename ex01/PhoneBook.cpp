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

	std::cout << GREEN << "Contact added!\n" << RESET << std::endl;
}

std::string	PhoneBook::adjust(std::string info) {
	if (info.length() > 10)
		return (info.substr(0, 9) + '.');
	else
		return (info);
}

void PhoneBook::printTable() {
	// Set the column width for each column
	const int indexWidth = 5;
	const int firstNameWidth = 15;
	const int lastNameWidth = 15;
	const int nickNameWidth = 15;

	// Print table header
	std::cout << std::setw(indexWidth) << "Index"
			  << "|" << std::setw(firstNameWidth) << "First Name"
			  << "|" << std::setw(lastNameWidth) << "Last Name"
			  << "|" << std::setw(nickNameWidth) << "Nick Name"
			  << "|" << std::endl;

	// Print separator line
	std::cout << std::string(indexWidth, '-') << "+"
			  << std::string(firstNameWidth, '-') << "+"
			  << std::string(lastNameWidth, '-') << "+"
			  << std::string(nickNameWidth, '-') << "+"
			  << std::endl;

	// Print table rows
	for (int i = 0; i < 7; i++) {
		if (phoneBook[i].exists == true) {
			std::cout << GREEN << std::setw(indexWidth) << i + 1 << RESET << "|"
						<< GREEN << std::setw(firstNameWidth) << adjust(phoneBook[i].getFirstName()) << RESET << "|"
						<< GREEN << std::setw(lastNameWidth) << adjust(phoneBook[i].getLastName()) << RESET << "|"
						<< GREEN << std::setw(nickNameWidth) << adjust(phoneBook[i].getNickName()) << RESET << "|"
						<< std::endl;
		}
	}
}

void PhoneBook::contactDetails(int i)
{
	std::string setVar = phoneBook[i - 1].getFirstName();
	size_t len = setVar.size();

	system("clear");

	std::cout << "┌";
	for (size_t j = 0; j < 22 + len; ++j) { std::cout << "~"; }
	std::cout << "┐" << std::endl;
	std::cout << "| Detailed info about " << setVar << " |";
	std::cout << "\n├";
	for (size_t j = 0; j < 22 + len; ++j) { std::cout << "~"; }
	std::cout << "┘" << std::endl;
	std::cout << "|Index No. : " << i << std::endl;
	std::cout << "|First Name: " << setVar << std::endl;

	setVar = phoneBook[i - 1].getLastName();
	std::cout << "|Last Name : " << setVar << std::endl;

	setVar = phoneBook[i - 1].getNickName();
	std::cout << "|Nickname  : " << setVar << std::endl;

	setVar = phoneBook[i - 1].getPhoneNum();
	std::cout << "|Phone No. : " << setVar << std::endl;

	setVar = phoneBook[i - 1].getDarkSecret();
	std::cout << "|Darkest Secret: " << setVar << std::endl;
	std::cout << "└";
	for (size_t j = 0; j < 22 + len; ++j) { std::cout << "~"; }
	std::cout << "\n\nPress Enter to continue";
	std::cin.ignore();
}

void	PhoneBook::getContact() {
	int			i;
	std::string	index;

	system("clear");

	while (1) {
		printTable();
		std::cout << std::endl;

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
			contactDetails(i);
			system("clear");
		}
		if (index.length() == 1 && index[0] == '0') {
			system("clear");
			break;
		}
	}
}
