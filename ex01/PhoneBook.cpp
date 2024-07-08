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

void	PhoneBook::addContact(Contact &newContact) {
	phoneBook[index] = newContact;
	index = (index + 1) % 7;

	if (contactCount < 7)
		contactCount++;

	std::cout << "First Name: " << phoneBook[index - 1].getFirstName() << std::endl;
}

void	PhoneBook::getContact() {
	int	i;

	system("clear");
	std::cout << WHITE << "To go to the menu, enter 0" << RESET << std::endl;
	std::cout << BLUE << "Please enter contact's index:" << RESET;
	std::cin >> i;
	if (std::cin.eof())
			exit (2);
	while (i != 0) {
		if (i < 1 || i > contactCount) {
			std::cout << RED << "Invalid index. Please enter a valid index (1-" << contactCount << ") or 0 to go to the menu." << RESET << std::endl;
			std::cout << WHITE << "To go to the menu, enter 0" << RESET << std::endl;
			std::cout << BLUE << "Please enter contact's index:" << RESET;
			std::cin >> i;
		}
		else {
			system("clear");
			std::cout << std::endl;
			std::cout << i;
			std::cout << " | ";
			std::cout << std::setw(10) << phoneBook[i - 1].getFirstName();
			std::cout << " | ";
			std::cout << std::setw(10) << phoneBook[i - 1].getLastName();
			std::cout << " | ";
			std::cout << std::setw(10) << phoneBook[i - 1].getNickName() << std::endl;
			std::cout << std::endl;
			std::cout << WHITE << "To go to the menu, enter 0" << RESET << std::endl;
			std::cout << BLUE << "Please enter contact's index:" << RESET;
			std::cin >> i;
		}
		if (std::cin.eof())
			exit (2);
	}
}
