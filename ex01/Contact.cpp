/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:24:19 by jofilipe          #+#    #+#             */
/*   Updated: 2024/06/26 16:28:14 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

std::string Contact::getFirstName() const {
	return (firstName);
}

std::string Contact::getLastName() const {
	return (lastName);
}

std::string Contact::getNickName() const {
	return (nickName);
}

int	Contact::firstNameVerif(std::string firstName) {
	while (firstName.empty()) {
		std::cout << "First name is empty!" << std::endl;
		std::cout << "Insert first name:" << std::endl;
		std::getline(std::cin, firstName);
	}
	return (0);
}

int	Contact::lastNameVerif(std::string lastName) {
	while (lastName.empty()) {
		std::cout << "Last name is empty!" << std::endl;
		std::cout << "Insert last name:" << std::endl;
		std::getline(std::cin, lastName);
	}
	return (0);
}

int	Contact::darkSecVerif(std::string darkSecret) {
	while (darkSecret.empty()) {
		std::cout << "Darkest Secret is empty!" << std::endl;
		std::cout << "Insert the Darkest Secret:" << std::endl;
		std::getline(std::cin, darkestSecret);
	}
	return (0);
}

int	Contact::numberVerif(std::string phoneNum) {
	while (phoneNum.empty()) {
		std::cout << "Phone number is empty!" << std::endl;
		std::cout << "Insert Phone number:" << std::endl;
		std::getline(std::cin, phoneNumber);
	}
	return (0);
}

int	Contact::inspectPhoneNum(std::string phoneNum) {
	for (std::string::size_type i = 0; i < phoneNum.length(); ++i) {
		if (!std::isdigit(phoneNum[i])) {
			std::cout << "Phone number as an invalid character!" << std::endl;
			return (-1);
		}
	}
	return (0);
}

int	Contact::nickVerif(std::string nickName) {
	while (nickName.empty()) {
		std::cout << "Nickname is empty!" << std::endl;
		std::cout << "Insert Nickname:" << std::endl;
		std::getline(std::cin, nickName);
	}
	return (0);
}

void	Contact::getContactInfo() {

	system("clear");
	Contact		addContact;
	PhoneBook	phoneBook;

	std::cout << "Insert first name:" << std::endl;
	if (!std::getline(std::cin, addContact.firstName))
		return ;
	firstNameVerif(addContact.firstName);

	std::cout << "Insert last name:" << std::endl;
	if (!std::getline(std::cin, addContact.lastName))
		return ;
	lastNameVerif(addContact.lastName);

	std::cout << "Insert nickname:" << std::endl;
	if (!std::getline(std::cin, addContact.nickName))
		return ;
	nickVerif(addContact.nickName);

	std::cout << "Insert number:" << std::endl;
	if (!std::getline(std::cin, addContact.phoneNumber))
		return ;
	numberVerif(addContact.phoneNumber);
	while (inspectPhoneNum(addContact.phoneNumber) == -1) {
		std::cout << "Insert number:" << std::endl;
		std::getline(std::cin, addContact.phoneNumber);
	}

	std::cout << "Insert the Darkest Secret:" << std::endl;
	if (!std::getline(std::cin, addContact.darkestSecret))
		return ;
	darkSecVerif(addContact.darkestSecret);

	system("clear");
	std::cout << "First Name: " << addContact.firstName << std::endl;
	std::cout << "Last Name: " << addContact.lastName << std::endl;
	std::cout << "Nickname: " << addContact.nickName << std::endl;
	std::cout << "Phone Number: " << addContact.phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << addContact.darkestSecret << std::endl;

	phoneBook.addContact(addContact);
}
