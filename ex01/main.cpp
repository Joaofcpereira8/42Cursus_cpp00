/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:23:40 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/05 11:50:25 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main()
{
	std::string	input;
	PhoneBook	phoneBook;

	system("clear");

	while (1) {
		std::cout << "Use ADD, SEARCH or EXIT" << std::endl;
		std::cout << BLUE <<  "Please enter a command:" << RESET;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit (2);
		if (input == "ADD")
		{
			phoneBook.getContactInfo();
		}
		else if (input == "SEARCH")
		{
			phoneBook.getContact();
		}
		else if (input == "EXIT")
			return (0);
		else
		{
			system("clear");
			std::cout << RED << "Command does not exist!" << RESET << std::endl;
		}
	}
}
