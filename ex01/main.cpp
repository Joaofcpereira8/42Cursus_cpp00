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
	while (1) {
		std::cout << "Please enter a command:";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			system("clear");
			contact.getContactInfo();
		}
		else if (input == "SEARCH")
		{
			/* code */
		}
		else if (input == "EXIT")
			return(0);
	}
	return (0);
}
