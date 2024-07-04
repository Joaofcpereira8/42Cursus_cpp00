/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:54:28 by jofilipe          #+#    #+#             */
/*   Updated: 2024/06/26 15:23:52 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	PhoneBook::addContact(Contact &newContact) {
	phoneBook[index] = newContact;
	index = (index + 1) % 7;

	if (contactCount < 7)
		contactCount++;
}

void	PhoneBook::getContact() {
	int	i;
	std::cout << WHITE << "To go to the menu, enter 0" << RESET << std::endl;
	std::cout << BLUE << "Please enter contact's index:" << RESET;
	std::cin >> i;
	while (i != 0)
	{
		std::cout << i;
		std::cout << " | ";
		std::cout << std::setw(10) << phoneBook[i].getFirstName();
		std::cout << " | ";
		std::cout << std::setw(10) << phoneBook[i].getLastName();
		std::cout << " | ";
		std::cout << std::setw(10) << phoneBook[i].getNickName() << std::endl;
		std::cout << WHITE << "To go to the menu, enter 0" << RESET << std::endl;
		std::cout << BLUE << "Please enter contact's index:" << RESET;
		std::cin >> i;
	}
}