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

int	Contact::firstNameVerif() {
	while (firstName.empty()) {
		std::cout << "First name is empty!" << std::endl;
		std::cout << "Insert first name:" << std::endl;
		std::getline(std::cin, firstName);
	}
	return (0);
}

int	Contact::lastNameVerif() {
	while (lastName.empty()) {
		std::cout << "Last name is empty!" << std::endl;
		std::cout << "Insert last name:" << std::endl;
		std::getline(std::cin, lastName);
	}
	return (0);
}

int	Contact::darkSecVerif() {
	while (darkestSecret.empty()) {
		std::cout << "Darkest Secret is empty!" << std::endl;
		std::cout << "Insert the Darkest Secret:" << std::endl;
		std::getline(std::cin, darkestSecret);
	}
	return (0);
}

int	Contact::numberVerif() {
	while (phoneNumber.empty()) {
		std::cout << "Phone number is empty!" << std::endl;
		std::cout << "Insert Phone number:" << std::endl;
		std::getline(std::cin, phoneNumber);
	}
	return (0);
}

int	Contact::inspectPhoneNum() {
	for (std::string::size_type i = 0; i < phoneNumber.length(); ++i) {
		if (!std::isdigit(phoneNumber[i])) {
			std::cout << "Phone number as an invalid character!" << std::endl;
			return (-1);
		}
	}
	return (0);
}

int	Contact::nickVerif() {
	while (nickName.empty()) {
		std::cout << "Nickname is empty!" << std::endl;
		std::cout << "Insert Nickname:" << std::endl;
		std::getline(std::cin, nickName);
	}
	return (0);
}

void	Contact::getContactInfo() {
	system("clear");

	std::cout << "Insert first name:" << std::endl;
	if (!std::getline(std::cin, firstName))
		return ;
	firstNameVerif();

	std::cout << "Insert last name:" << std::endl;
	if (!std::getline(std::cin, lastName))
		return ;
	lastNameVerif();

	std::cout << "Insert nickname:" << std::endl;
	if (!std::getline(std::cin, nickName))
		return ;
	nickVerif();

	std::cout << "Insert number:" << std::endl;
	if (!std::getline(std::cin, phoneNumber))
		return ;
	numberVerif();
	while (inspectPhoneNum() == -1) {
		std::cout << "Insert number:" << std::endl;
		std::getline(std::cin, phoneNumber);
	}

	std::cout << "Insert the Darkest Secret:" << std::endl;
	if (!std::getline(std::cin, darkestSecret))
		return ;
	darkSecVerif();

	system("clear");
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
