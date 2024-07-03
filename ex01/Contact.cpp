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

int	Contact::firstNameVerif(Contact &contact) {
	while (contact.firstName.empty()) {
		std::cout << "First name is empty!" << std::endl;
		std::cout << "Insert first name:" << std::endl;
		std::getline(std::cin, firstName);
	}
	return (0);
}

int	Contact::lastNameVerif(Contact &contact) {
	while (contact.lastName.empty()) {
		std::cout << "Last name is empty!" << std::endl;
		std::cout << "Insert last name:" << std::endl;
		std::getline(std::cin, lastName);
	}
	return (0);
}

int	Contact::darkSecVerif(Contact &contact) {
	while (contact.darkestSecret.empty()) {
		std::cout << "Darkest Secret is empty!" << std::endl;
		std::cout << "Insert the Darkest Secret:" << std::endl;
		std::getline(std::cin, darkestSecret);
	}
	return (0);
}

int	Contact::numberVerif(Contact &contact) {
	while (contact.phoneNumber.empty()) {
		std::cout << "Phone number is empty!" << std::endl;
		std::cout << "Insert Phone number:" << std::endl;
		std::getline(std::cin, phoneNumber);
	}
	return (0);
}

int	Contact::inspectPhoneNum(Contact &contact) {
	for (std::string::size_type i = 0; i < contact.phoneNumber.length(); ++i) {
		if (!std::isdigit(contact.phoneNumber[i])) {
			std::cout << "Phone number as an invalid character!" << std::endl;
			return (-1);
		}
	}
	return (0);
}

int	Contact::nickVerif(Contact &contact) {
	while (contact.nickName.empty()) {
		std::cout << "Nickname is empty!" << std::endl;
		std::cout << "Insert Nickname:" << std::endl;
		std::getline(std::cin, nickName);
	}
	return (0);
}

void	Contact::getContactInfo() {

	system("clear");
	Contact	addContact;

	std::cout << "Insert first name:" << std::endl;
	if (!std::getline(std::cin, addContact.firstName))
		return ;
	firstNameVerif();

	std::cout << "Insert last name:" << std::endl;
	if (!std::getline(std::cin, addContact.lastName))
		return ;
	lastNameVerif();

	std::cout << "Insert nickname:" << std::endl;
	if (!std::getline(std::cin, addContact.nickName))
		return ;
	nickVerif();

	std::cout << "Insert number:" << std::endl;
	if (!std::getline(std::cin, addContact.phoneNumber))
		return ;
	numberVerif();
	while (inspectPhoneNum() == -1) {
		std::cout << "Insert number:" << std::endl;
		std::getline(std::cin, addContact.phoneNumber);
	}

	std::cout << "Insert the Darkest Secret:" << std::endl;
	if (!std::getline(std::cin, addContact.darkestSecret))
		return ;
	darkSecVerif();

	system("clear");
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;


}
