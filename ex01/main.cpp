/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:23:40 by jofilipe          #+#    #+#             */
/*   Updated: 2024/06/26 16:31:18 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main()
{
	Contact		contact;
	PhoneBook	phoneBook;
	std::string	input;
	system("clear");

	while (1) {
		std::cout << "Use ADD, SEARCH or EXIT" << std::endl;
		std::cout << BLUE <<  "Please enter a command:" << RESET;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit (2);
		if (input == "ADD")
		{
			contact.getContactInfo();
			std::cout << GREEN << "This message will be cleared. Press Enter to return to the menu..." << RESET << std::endl;
			std::cin.get();
			system("clear");
			std::cout << YELLOW << "Screen cleared. Continuing with the program..." << RESET << std::endl;
		}
		else if (input == "SEARCH")
		{
			system("clear");
			phoneBook.getContact();
		}
		else if (input == "EXIT")
			return(0);
		else
		{
			system("clear");
			std::cout << RED << "Command does not exist!" << RESET << std::endl;
		}
	}
}
