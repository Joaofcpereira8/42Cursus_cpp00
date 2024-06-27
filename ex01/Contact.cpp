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
	if (firstName.empty()) {
		std::cout << "First name is empty!" << std::endl;
		return (-1);
	}
	return (0);
}

int	Contact::lastNameVerif() {
	if (lastName.empty()) {
		std::cout << "Last name is empty!" << std::endl;
		return (-1);
	}
	return (0);
}

int	Contact::darkSecVerif() {
	if (darkestSecret.empty()) {
		std::cout << "Darkest secret is empty!" << std::endl;
		return (-1);
	}
	return (0);
}

int	Contact::numberVerif() {
	if (phoneNumber.empty()) {
		std::cout << "Phone number is empty!" << std::endl;
		return (-1);
	}
	return (0);
}

int	Contact::nickVerif() {
	if (nickname.empty()) {
		std::cout << "First name is empty!" << std::endl;
		return (-1);
	}
	return (0);
}

int	Contact::getContactInfo() {
	std::cout << "Insert first name:" << std::endl;
	std::getline(std::cin, firstName);
	if (firstNameVerif() == -1)
		std::getline(std::cin, firstName);

	std::cout << "Insert last name:" << std::endl;
	std::getline(std::cin, lastName);
	if (lastNameVerif() == -1)
		return (-1);

	std::cout << "Insert nickname:" << std::endl;
	std::getline(std::cin, nickname);
	if (nickVerif() == -1)
		return (-1);

	std::cout << "Insert number:" << std::endl;
	std::getline(std::cin, phoneNumber);
	if (numberVerif() == -1)
		return (-1);

	std::cout << "Insert the Darkest Secret:" << std::endl;
	std::getline(std::cin, darkestSecret);
	if (darkSecVerif() == -1)
		return (-1);

	return (0);
}
