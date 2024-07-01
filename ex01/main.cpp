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
	std::string	input;
	system("clear");
	while (1) {
		std::cout << "Use ADD, SEARCH or EXIT" << std::endl;
		std::cout << "Please enter a command:";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			contact.getContactInfo();
			std::cout << "This message will be cleared. Press Enter to return to the menu..." << std::endl;
			std::cin.get();
			system("clear");
			std::cout << "Screen cleared. Continuing with the program..." << std::endl;
		}
		else if (input == "SEARCH")
		{
			/* code */
		}
		else if (input == "EXIT")
			return(0);
		else
		{
			system("clear");
			std::cout << "Command does not exist!" << std::endl;
		}
		if (std::cin.eof())
			exit (2);
	}
}
